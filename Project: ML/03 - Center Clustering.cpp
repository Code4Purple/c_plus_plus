#include <iostream>
#include <vector>
//#include <cmath>

class KMeans {
    public:
        KMeans(int k) : k(k) {}

        void fit(const std::vector<std::pair<float, float >>& data){
            // for simplicity, initializing centroids ramdomly from the data
            for(int i = 0; i < k; i++){
                centroids.push_back(data[i]);
            }
            // This is where you would typically perform iteration to refine centroids
        }

        std::vector<std::pair<float, float>> get_centroids(){
            return centroids;
        }
    private:
        int k;
        std::vector<std::pair<float,float >> centroids;
};

int main() {
    KMeans Kmeans(3);
    std::vector<std::pair<float,float>> data = { {1,2}, {1,4}, {1,0},
                                                    {10,2}, {10,4}, {10,0} };
    Kmeans.fit(data);
    auto centroids = Kmeans.get_centroids();

    for (const auto& centroid : centroids){
        std::cout << "Centroid: (" << centroid.first << ", " << centroid.second << ")\n";
    }
}