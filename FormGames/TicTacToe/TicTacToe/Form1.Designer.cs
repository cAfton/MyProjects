﻿namespace TicTacToe
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            tableLayoutPanel1 = new TableLayoutPanel();
            button9 = new Button();
            button8 = new Button();
            button7 = new Button();
            button6 = new Button();
            button5 = new Button();
            button4 = new Button();
            button3 = new Button();
            button2 = new Button();
            button1 = new Button();
            tableLayoutPanel1.SuspendLayout();
            SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.ColumnCount = 3;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.Controls.Add(button9, 2, 2);
            tableLayoutPanel1.Controls.Add(button8, 1, 2);
            tableLayoutPanel1.Controls.Add(button7, 0, 2);
            tableLayoutPanel1.Controls.Add(button6, 2, 1);
            tableLayoutPanel1.Controls.Add(button5, 1, 1);
            tableLayoutPanel1.Controls.Add(button4, 0, 1);
            tableLayoutPanel1.Controls.Add(button3, 2, 0);
            tableLayoutPanel1.Controls.Add(button2, 1, 0);
            tableLayoutPanel1.Controls.Add(button1, 0, 0);
            tableLayoutPanel1.Location = new Point(12, 12);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 3;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            tableLayoutPanel1.Size = new Size(470, 441);
            tableLayoutPanel1.TabIndex = 0;
            // 
            // button9
            // 
            button9.Location = new Point(315, 295);
            button9.Name = "button9";
            button9.Size = new Size(150, 140);
            button9.TabIndex = 8;
            button9.Tag = false;
            button9.Text = " ";
            button9.UseVisualStyleBackColor = true;
            button9.Click += ButtonClick_Event;
            // 
            // button8
            // 
            button8.Location = new Point(159, 295);
            button8.Name = "button8";
            button8.Size = new Size(150, 140);
            button8.TabIndex = 7;
            button8.Tag = false;
            button8.Text = " ";
            button8.UseVisualStyleBackColor = true;
            button8.Click += ButtonClick_Event;
            // 
            // button7
            // 
            button7.Location = new Point(3, 295);
            button7.Name = "button7";
            button7.Size = new Size(150, 140);
            button7.TabIndex = 6;
            button7.Tag = false;
            button7.Text = " ";
            button7.UseVisualStyleBackColor = true;
            button7.Click += ButtonClick_Event;
            // 
            // button6
            // 
            button6.Location = new Point(315, 149);
            button6.Name = "button6";
            button6.Size = new Size(150, 140);
            button6.TabIndex = 5;
            button6.Tag = false;
            button6.Text = " ";
            button6.UseVisualStyleBackColor = true;
            button6.Click += ButtonClick_Event;
            // 
            // button5
            // 
            button5.Location = new Point(159, 149);
            button5.Name = "button5";
            button5.Size = new Size(150, 140);
            button5.TabIndex = 4;
            button5.Tag = false;
            button5.Text = " ";
            button5.UseVisualStyleBackColor = true;
            button5.Click += ButtonClick_Event;
            // 
            // button4
            // 
            button4.Location = new Point(3, 149);
            button4.Name = "button4";
            button4.Size = new Size(150, 140);
            button4.TabIndex = 3;
            button4.Tag = false;
            button4.Text = " ";
            button4.UseVisualStyleBackColor = true;
            button4.Click += ButtonClick_Event;
            // 
            // button3
            // 
            button3.Location = new Point(315, 3);
            button3.Name = "button3";
            button3.Size = new Size(150, 140);
            button3.TabIndex = 2;
            button3.Tag = false;
            button3.Text = " ";
            button3.UseVisualStyleBackColor = true;
            button3.Click += ButtonClick_Event;
            // 
            // button2
            // 
            button2.Location = new Point(159, 3);
            button2.Name = "button2";
            button2.Size = new Size(150, 140);
            button2.TabIndex = 1;
            button2.Tag = false;
            button2.Text = " ";
            button2.UseVisualStyleBackColor = true;
            button2.Click += ButtonClick_Event;
            // 
            // button1
            // 
            button1.Location = new Point(3, 3);
            button1.Name = "button1";
            button1.Size = new Size(150, 140);
            button1.TabIndex = 0;
            button1.Tag = false;
            button1.Text = " ";
            button1.UseVisualStyleBackColor = true;
            button1.Click += ButtonClick_Event;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(494, 465);
            Controls.Add(tableLayoutPanel1);
            Name = "Form1";
            Text = "Form1";
            tableLayoutPanel1.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private TableLayoutPanel tableLayoutPanel1;
        private Button button9;
        private Button button8;
        private Button button7;
        private Button button6;
        private Button button5;
        private Button button4;
        private Button button3;
        private Button button2;
        private Button button1;
    }
}
