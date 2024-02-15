#include <iostream>

template <typename Tipo>
class Arranjo : public Lista<Tipo>
{
private:
  int tamanhoMaximo;
  int tamanhoDoArranjo;
  int atual;
  Tipo* arranjo;
public:

  Arranjo(int tamanho=tamanhoPadrao)
  {
    tamanhoMaximo    = tamanho;
    tamanhoDoArranjo = 0;
    atual            = 0;
    arranjo          = new Tipo[tamanhoMaximo];
  }

  ~Arranjo()
  {
    delete [] arranjo;
  }

  void esvaziar()
  {
    delete [] arranjo;
    tamanhoDoArranjo = 0;
    arranjo          = new Tipo[tamanhoMaximo];
  }


}
