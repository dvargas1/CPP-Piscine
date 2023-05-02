#include <iostream>

class DANIEL{
public:
    DANIEL();
    DANIEL(std::string NOME);
    DANIEL(int idade);
    ~DANIEL();
    void setLife(int i);
    int getLife(void);
    void JerfinDoidao(void);
    void PinnaMaluco(std::string nomedopinna);
    void BrunoLouco(float const nomedevariavelgrandepkct);
    void DanielOLINDAO(double const a, char *str, std::string OLAAMIGOS);
private:
    int Life;
}