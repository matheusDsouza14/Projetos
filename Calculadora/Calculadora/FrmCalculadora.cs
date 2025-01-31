using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculadora
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public string numbertext;
        public string operation;
        public double result; 
        private void btnNumber0_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "0";
        }
        private void btnNumber1_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "1";
        }
        private void btnNumber2_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "2";
        }
        private void btnNumber3_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "3";
        }
        private void btnNumber4_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "4";
        }
        private void btnNumber5_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "5";
        }
        private void btnNumber6_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "6";
        }
        private void btnNumber7_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "7";
        }
        private void btnNumber8_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "8";
        }
        private void btnNumber9_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "9";
        }
        private void btnOprPlus_Click(object sender, EventArgs e)
        {
            operation = "Soma";
            txtDisplay.Text += "+";
        }
        private void btnOprMinus_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "-";
        }
        private void btnOprTimes_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "X";
        }
        private void btnOprDivided_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += "/";
        } 
        private void btnPoint_Click(object sender, EventArgs e)
        {
            txtDisplay.Text += ".";
        }
        private void btnOprEquals_Click(object sender, EventArgs e)
        {
            // Cria um objeto DataTable
            DataTable dt = new DataTable();
            // Tenta calcular a expressão matemática da caixa de texto
            try
            {
                // Substitui ',' por '.' na expressão para garantir que decimais sejam interpretados corretamente
                string expression = txtDisplay.Text.Replace('X', '*');
                // Avalia a expressão e armazena o resultado na variável 'result'
                result = Convert.ToDouble(dt.Compute(expression, ""));
                // Exibe o resultado na caixa de texto
                txtDisplay.Text = result.ToString();
            }
            catch (Exception ex)
            {
                // Se houver um erro ao calcular a expressão, exiba uma mensagem de erro
                txtDisplay.Text = "Erro";
            }
        }
        private void btnClear_Click(object sender, EventArgs e)
        {
            txtDisplay.Text = "";
        }

       
    }
}
