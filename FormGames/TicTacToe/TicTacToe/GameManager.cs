using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TicTacToe
{
    public class GameManager
    {
        public string Player1 { get; set; }
        public string Player2 { get; set; }
        public Bitmap CurrentPlayer { get; set; }
        public bool IsFirstPlayer { get; set; } = true;

        public GameManager() {
            CurrentPlayer = images[0];
        }

        private Bitmap[] images { get; } = { new Bitmap(Image.FromFile("..\\..\\..\\images\\circle.png"), new Size(128, 128)), new Bitmap(Image.FromFile("..\\..\\..\\images\\cross.png"), new Size(128, 128)) };

        public void ChangePlayer()
        {
            IsFirstPlayer = !IsFirstPlayer;
            CurrentPlayer = (IsFirstPlayer ? images[0] : images[1]);
        }

        public void InputNames()
        {
            Player1 = Interaction.InputBox("Input first player`s name: ", "Name input");
            Player2 = Interaction.InputBox("Input second player`s name: ", "Name input");
        }

        public bool IsContinue(TableLayoutControlCollection controls)
        {
            foreach (Control item in controls) 
            {
                if (!(bool)item.Tag)
                {
                    return true;
                }
            }
            return false;
        }
    }
}
