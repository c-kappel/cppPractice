#include <iostream>
#include <vector>

class DynamicIntList{
    private:
    std::vector<int> data;
    public:

    void add(int x){
        data.push_back(x);
    }

    void removeLast(){
        data.pop_back();
    }

    int get(int index) const{
        return data[index];
    }

    void print() const{
        for(int i = 0; i<data.size(); i++){
            std::cout<< data[i] << "\n";
        }
    }

};

int main(){

}
