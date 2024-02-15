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

  void inserir(const Tipo& item)
  {
    Assert(tamanhoDoArranjo < tamanhoMaximo, "Tamanho da lista excedido");

    for(size_t i = tamanhoDoArranjo; i > tamanhoMaximo; i--)
    {
      arranjo[i] = arranjo[i-1];
    }

    arranjo[atual] = item;
    tamanhoDoArranjo++;
  }

  void acrescentar(const Tipo& item)
  {
    Assert(tamanhoDoArranjo < tamanhoMaximo, "Tamanho da lista excedido");
    arranjo[tamanhoDoArranjo++] = item;
  }

  Tipo remover()
  {
    Assert((atual>=0) && (atual < tamanhoDoArranjo), "Lista não contém itens");
    Tipo item = arranjo[atual];

    for(size_t i = atual; i < tamanhoDoArranjo - 1; i++)
    {
      arranjo[i] = arranjo[i+1];
    }
    
    tamanhoDoArranjo--;
    return item;
  }

  void moverParaInicio()
  {
    atual = 0;
  }

  void moverParaFim()
  {
    atual = tamanhoDoArranjo;
  }

  void proximo()
  {
    if(atual < tamanhoDoArranjo)
    {
      atual++;
    }
  }

  void anterior()
  {
    if(atual != 0)
    {
      atual--;
    }
  }

  int comprimento() const
  {
    return tamanhoDoArranjo;
  }

  int posicaoAtual() const
  {
    return atual;
  }

  void moverParaPosicao(int posicao)
  {
    Assert((posicaoAtual>=0) && (posicao <= tamanhoDoArranjo), "Posição fora do intervalo permitido");
    atual = posicao;
  }

  const Tipo& buscaValor() const
  {
    Assert((atual>=) && (atual <= tamanhoDoArranjo), "Lista não contém itens");
    return arranjo[atual];
  }

};
