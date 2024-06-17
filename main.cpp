#include <vector>
#include <queue>
#include <atomic>

const int WIN_COND;
const int MAX_CALC_DEPT;
const int REMOVE_LINES;


std::atomic_uint Xwins = 0;
std::atomic_uint Ywins = 0;
std::atomic_uint draws = 0;

enum State {
    empty = 0,
    x = 1,
    y = 2
};

struct Node {
    int width;
    int height;
    char playerTurn;

    bool checkForWin() {
        // Do this too
    }

    void removeLastRows() {
        // Do this
    }

    std::vector<std::vector<State>> board;
};


struct NodeContainer {
    std::queue<Node> nodes;

    void simulateNode(Node node);
    void loop();
};

void bruteFOURce(const char * board, const int width, const int height, const int connectCountToWin, const char nextToMove, const int calcDepth) {

}










int main() {
    bruteFOURce("__O__X", 3, 2, 2, 'X', 10000);
}