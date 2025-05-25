#include <iostream>
#include <cstdlib>

int main(){
    std::srand(std::time(nullptr));
    int NilaiTersembunyi = std::rand() % 50 + 1;
    int NilaiJawab;
    
    while(true){
        
        std::cout << "masukkan nilai dari 1-50" << std::endl;
        std::cin >> NilaiJawab;
        
        if(NilaiJawab == NilaiTersembunyi){
            break;
            
        }else{
            system("clear");
            if(NilaiJawab < NilaiTersembunyi){
                std::cout << "lebih dari " << NilaiJawab << std::endl;
                
            }
            if(NilaiJawab > NilaiTersembunyi){
                std::cout << "kurang dari " << NilaiJawab << std::endl;
                
            }
        }
    }
    
    std::cout << "\033[1m \033[38;2;153;255;153m selamat jawabanya adalah" << "\033[0m " + std::to_string(NilaiTersembunyi);
    
    return 0;
}
