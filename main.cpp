#include "pliib.hpp"

using namespace std;
int main(){
    std::vector<int> x(100000000, 100);
    x.push_back(4);
    x.push_back(3);
    x.push_back(2);
    x.push_back(1);

    std::function<int(int)> zed = [](int z){ return (int) z * z % z; }; 
    //std::vector<int> ret = p_vv_map(x, zed);// [](int i) -> int{ return i * i;});
    int i;

    std::function<double(double)> zeta = [](double z){ return (double) z * z / z * .0065 + 86 - 14; };
    std::vector<double> y (100000000, 100.0);
    //auto z_ret = p_vv_map(y, zeta);
    p_vv_apply(y, zeta);
    //for (i = 0; i < y.size(); i++){
    //    cerr << "Vector elem: " << i << " : " << y[i] << endl;
    //}
    return 0;
}
