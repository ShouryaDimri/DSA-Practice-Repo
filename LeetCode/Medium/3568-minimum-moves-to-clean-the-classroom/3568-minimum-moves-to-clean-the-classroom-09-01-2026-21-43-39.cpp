class Solution {
public:

    struct State {
        int r;
        int c;
        int energy;
        int mask;
        int moves;
    };

    int minMoves(vector<string>& classroom, int energy) {

        int m = classroom.size();
        int n = classroom[0].size();

        // Find start and number every litter cell
        int sr = 0, sc = 0;
        int litterCount = 0;

        vector<vector<int>> litterId(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }

                if (classroom[i][j] == 'L') {
                    litterId[i][j] = litterCount++;
                }
            }
        }

        // All litter collected
        int targetMask = (1 << litterCount) - 1;

        // visited[r][c][energy][mask]
        vector<vector<vector<vector<bool>>>> visited(
            m,
            vector<vector<vector<bool>>>(
                n,
                vector<vector<bool>>(
                    energy + 1,
                    vector<bool>(1 << litterCount, false)
                )
            )
        );

        queue<State> q;

        q.push({sr, sc, energy, 0, 0});
        visited[sr][sc][energy][0] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q.empty()) {

            State cur = q.front();
            q.pop();

            int r = cur.r;
            int c = cur.c;
            int e = cur.energy;
            int mask = cur.mask;
            int moves = cur.moves;

            // Have we collected everything?
            if (mask == targetMask) {
                return moves;
            }

            // If energy is 0, we cannot move.
            // We can only continue if we are standing on R.
            if (e == 0 && classroom[r][c] != 'R') {
                continue;
            }

            for (int d = 0; d < 4; d++) {

                int nr = r + dr[d];
                int nc = c + dc[d];

                // Outside grid
                if (nr < 0 || nr >= m || nc < 0 || nc >= n) {
                    continue;
                }

                // Obstacle
                if (classroom[nr][nc] == 'X') {
                    continue;
                }

                // Moving costs 1 energy
                int newEnergy = e - 1;

                // If we are entering R, restore energy
                if (classroom[nr][nc] == 'R') {
                    newEnergy = energy;
                }

                // Collect litter if present
                int newMask = mask;

                if (classroom[nr][nc] == 'L') {

                    int id = litterId[nr][nc];

                    newMask |= (1 << id);
                }

                // Already visited this exact state
                if (visited[nr][nc][newEnergy][newMask]) {
                    continue;
                }

                visited[nr][nc][newEnergy][newMask] = true;

                q.push({
                    nr,
                    nc,
                    newEnergy,
                    newMask,
                    moves + 1
                });
            }
        }

        return -1;
    }
};