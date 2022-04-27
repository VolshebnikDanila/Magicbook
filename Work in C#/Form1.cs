/*using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Сишарп_тот_файл
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
    }
}
*/
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
namespace Сишарп_тот_файл
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            this.MinimumSize = new Size(440, 480);
            this.MaximumSize = new Size(440, 480);
            this.StartPosition = FormStartPosition.CenterScreen;
            PictureBox dog_image = new PictureBox();
            dog_image.Width = 200;
            dog_image.Height = 200;
            dog_image.Image = Image.FromFile("D:\\C#\\Dogs.gif");
            dog_image.SizeMode = PictureBoxSizeMode.StretchImage;
            dog_image.Location = new Point(50, 50);
            dog_image.BorderStyle = BorderStyle.Fixed3D;

            

            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            /*this.Controls.Add(pictureBox1);
            Button dog_voice = new Button();
            dog_voice.Text = "Выровнять гифку";*/
            button1.Text = "Выровнять гифку";
            button1.Location = new Point(10, 10);
            pictureBox1.Location = new Point(100, 100);
        }
        private void button2_Click(object sender, EventArgs e)
        {
         
            button2.Text = "Погулять с собакой";
            Form2 f2 = new Form2();

            f2.label1.Text = "Ура гуляяяять";
            f2.label1.ForeColor = Color.Green;
            f2.Show();
            
        }
    }
}