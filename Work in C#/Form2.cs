using System;
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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            this.MinimumSize = new Size(450, 500);
            this.MaximumSize = new Size(450, 500);
            this.StartPosition = FormStartPosition.CenterScreen;
            PictureBox dog_image = new PictureBox();
            dog_image.Width = 200;
            dog_image.Height = 200;
            dog_image.Image = Image.FromFile("D:\\C#\\1sSQ.gif");
            dog_image.SizeMode = PictureBoxSizeMode.StretchImage;
            dog_image.Location = new Point(50, 50);
            dog_image.BorderStyle = BorderStyle.Fixed3D;




        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
