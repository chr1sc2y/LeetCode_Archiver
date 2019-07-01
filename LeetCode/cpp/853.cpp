class Solution {
public:
    struct Node {
        int position;
        int speed;

        Node(const int &pos, const int &spe) {
            position = pos;
            speed = spe;
        }
    };

    struct CompareNode {
        bool operator()(const Node &node0, const Node &node1) {
            return node0.position > node1.position;
        }
    };

    int carFleet(int target, vector<int> &position, vector<int> &speed) {
        int size = position.size();
        vector<Node> car;
        vector<double> time(size, 0);
        for (int i = 0; i < size; ++i)
            car.push_back(Node(position[i], speed[i]));
        sort(car.begin(), car.end(), CompareNode());
        for (int i = 0; i < size; ++i)
            time[i] = 1.0 * (target - car[i].position) / car[i].speed;
        int i = 0, fleet = 0;
        while (i < size) {
            double current = time[i];
            ++i;
            while (i < size && current >= time[i])
                ++i;
            ++fleet;
        }
        return fleet;
    }
};