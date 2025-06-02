using Microsoft.VisualBasic;

namespace TicTacToe
{

    public partial class Form1 : Form
    {
        private GameManager gameManager {  get; set; } = new GameManager();
        public Form1()
        {
            InitializeComponent();
            gameManager.InputNames();
        }

        private void ButtonClick_Event(object sender, EventArgs e)
        {
            if (gameManager.IsContinue(tableLayoutPanel1.Controls))
            {
                Button button = sender as Button;
                if (button != null)
                {
                    if (!(bool)button.Tag)
                    {
                        button.Image = gameManager.CurrentPlayer;
                        button.Tag = true;
                        if (gameManager.IsFirstPlayer)
                        {
                            gameManager.IsFirstPlayer = false;
                            gameManager.CurrentPlayer = new Bitmap(Image.FromFile("..\\..\\..\\images\\cross.png"), new Size(128, 128));
                        }
                        else
                        {
                            gameManager.IsFirstPlayer = true;
                            gameManager.CurrentPlayer = new Bitmap(Image.FromFile("..\\..\\..\\images\\circle.png"), new Size(128, 128));
                        }
                    
                    }
                }
            }
            else
            {
                MessageBox.Show("End");
            }
            
        }
    }
}
