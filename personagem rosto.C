using System;
using System.Collections.Generic;

namespace GoogleSantaTracker.Personagens
{
    /// <summary>
    /// Classe que representa os rostos (faces) dos personagens
    /// do Google Santa Tracker
    /// </summary>
    public class PersonagemRosto
    {
        // Tipos de personagens
        public enum TipoPersonagem
        {
            Santa,
            Elfo,
            Pegman,
            Rena
        }

        // Propriedades do rosto
        public int Id { get; set; }
        public TipoPersonagem Tipo { get; set; }
        public string Nome { get; set; }
        public int NumeroDeFaces { get; set; }
        public List<string> Expressoes { get; set; }
        public List<string> Cores { get; set; }

        /// <summary>
        /// Construtor da classe PersonagemRosto
        /// </summary>
        public PersonagemRosto()
        {
            NumeroDeFaces = 100;
            Expressoes = new List<string>();
            Cores = new List<string>();
        }

        /// <summary>
        /// Inicializa as expressões faciais dos personagens
        /// </summary>
        public void InicializarExpressoes()
        {
            Expressoes.Clear();
            Expressoes.Add("Feliz");
            Expressoes.Add("Triste");
            Expressoes.Add("Surpreso");
            Expressoes.Add("Apaixonado");
            Expressoes.Add("Assustado");
            Expressoes.Add("Confuso");
            Expressoes.Add("Cansado");
            Expressoes.Add("Zangado");
        }

        /// <summary>
        /// Define as cores características do personagem
        /// </summary>
        public void DefinirCores()
        {
            Cores.Clear();
            switch (Tipo)
            {
                case TipoPersonagem.Santa:
                    Cores.Add("Vermelho");
                    Cores.Add("Branco");
                    Cores.Add("Preto");
                    break;
                case TipoPersonagem.Elfo:
                    Cores.Add("Verde");
                    Cores.Add("Amarelo");
                    Cores.Add("Vermelho");
                    break;
                case TipoPersonagem.Pegman:
                    Cores.Add("Azul");
                    Cores.Add("Amarelo");
                    Cores.Add("Vermelho");
                    break;
                case TipoPersonagem.Rena:
                    Cores.Add("Marrom");
                    Cores.Add("Bege");
                    Cores.Add("Preto");
                    break;
            }
        }

        /// <summary>
        /// Retorna informações do rosto do personagem
        /// </summary>
        public override string ToString()
        {
            return $"Personagem: {Nome} ({Tipo})\n" +
                   $"Número de Faces: {NumeroDeFaces}\n" +
                   $"Expressões: {string.Join(", ", Expressoes)}\n" +
                   $"Cores: {string.Join(", ", Cores)}";
        }
    }
}
