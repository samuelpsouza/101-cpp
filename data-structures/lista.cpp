template <typename Tipo> class Lista
{
private:
  void operator =(const Lista&) {}
  Lista(const Lista&) {}
public:
  // Constructors and Destructors
  Lista(){}
  virtual ~Lista() {}


  // Esvazia a lista
  virtual void esvaziar()                    = 0;

  // Insere um elemento na posição atual
  virtual void inserir(const Tipo& item)     = 0;

  // Acrescenta um elemento no fim da lista
  virtual void acrescentar(const Tipo& item) = 0;

  // Remove e retorna o elemento atual posição da lista
  virtual Tipo remover()                     = 0;

  // Define a posição inicial como a atual
  virtual void moverParaInicio()             = 0;

  // Define a posição final como a atual
  virtual void moverParaFim()                = 0;

  // Move a posição atual uma posição para a esquerda
  // Nenhuma mudança deve acontecer se a posição atual for a do inicio.
  virtual void anterior()                    = 0;

  // Move a posição atual uma posição para a direita
  // Nenhuma mudança deve acontecer se a posição atual for a ultima
  virtual void proximo()                     = 0;

  // O numero de elementos contidos na lista
  virtual int comprimento() const            = 0;

  // Posição do elemento atribuido como otual
  virtual int PosicaoAtual() const           = 0;

  // Define uma dada posição como atual
  virtual void moverParaPosicao(int posicao) = 0;

  // Retorna: O elemento atual
  virtual const Tipo& buscaValor() const     = 0;
}
