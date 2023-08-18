namespace AdvancedABC
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.textboxW = new System.Windows.Forms.TextBox();
            this.textboxM = new System.Windows.Forms.TextBox();
            this.webBrowser1 = new System.Windows.Forms.WebBrowser();
            this.soundStart = new System.Windows.Forms.Button();
            this.soundStop = new System.Windows.Forms.Button();
            this.ABCstart = new System.Windows.Forms.Button();
            this.ABCstop = new System.Windows.Forms.Button();
            this.choiceMargin = new System.Windows.Forms.Button();
            this.abcMargin = new System.Windows.Forms.Button();
            this.choiceRand = new System.Windows.Forms.Button();
            this.choice1 = new System.Windows.Forms.TextBox();
            this.choice2 = new System.Windows.Forms.TextBox();
            this.choice3 = new System.Windows.Forms.TextBox();
            this.textboxScore = new System.Windows.Forms.TextBox();
            this.randStart = new System.Windows.Forms.Button();
            this.randStop = new System.Windows.Forms.Button();
            this.indexAll = new System.Windows.Forms.TextBox();
            this.indexShow = new System.Windows.Forms.TextBox();
            this.indexTSearch = new System.Windows.Forms.TextBox();
            this.textTSearch = new System.Windows.Forms.TextBox();
            this.indexBSearch = new System.Windows.Forms.Button();
            this.textBSearch = new System.Windows.Forms.Button();
            this.loadA = new System.Windows.Forms.Button();
            this.loadB = new System.Windows.Forms.Button();
            this.loadC = new System.Windows.Forms.Button();
            this.loadD = new System.Windows.Forms.Button();
            this.loadE = new System.Windows.Forms.Button();
            this.loadF = new System.Windows.Forms.Button();
            this.loadG = new System.Windows.Forms.Button();
            this.loadH = new System.Windows.Forms.Button();
            this.loadI = new System.Windows.Forms.Button();
            this.loadJ = new System.Windows.Forms.Button();
            this.loadK = new System.Windows.Forms.Button();
            this.loadL = new System.Windows.Forms.Button();
            this.loadM = new System.Windows.Forms.Button();
            this.loadN = new System.Windows.Forms.Button();
            this.loadO = new System.Windows.Forms.Button();
            this.loadP = new System.Windows.Forms.Button();
            this.loadQ = new System.Windows.Forms.Button();
            this.loadR = new System.Windows.Forms.Button();
            this.loadS = new System.Windows.Forms.Button();
            this.loadT = new System.Windows.Forms.Button();
            this.loadU = new System.Windows.Forms.Button();
            this.loadV = new System.Windows.Forms.Button();
            this.loadW = new System.Windows.Forms.Button();
            this.loadX = new System.Windows.Forms.Button();
            this.loadY = new System.Windows.Forms.Button();
            this.loadZ = new System.Windows.Forms.Button();
            this.loadAZ = new System.Windows.Forms.Button();
            this.swapGroup = new System.Windows.Forms.Button();
            this.choiceSeq = new System.Windows.Forms.Button();
            this.textboxChoice1 = new System.Windows.Forms.TextBox();
            this.textboxChoice2 = new System.Windows.Forms.TextBox();
            this.textboxChoice3 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // textboxW
            // 
            this.textboxW.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textboxW.ForeColor = System.Drawing.Color.SteelBlue;
            this.textboxW.Location = new System.Drawing.Point(494, 473);
            this.textboxW.Multiline = true;
            this.textboxW.Name = "textboxW";
            this.textboxW.Size = new System.Drawing.Size(714, 51);
            this.textboxW.TabIndex = 0;
            this.textboxW.Click += new System.EventHandler(this.textboxW_Click);
            // 
            // textboxM
            // 
            this.textboxM.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textboxM.Location = new System.Drawing.Point(494, 527);
            this.textboxM.Multiline = true;
            this.textboxM.Name = "textboxM";
            this.textboxM.Size = new System.Drawing.Size(714, 362);
            this.textboxM.TabIndex = 1;
            this.textboxM.Click += new System.EventHandler(this.textBoxM_Click);
            // 
            // webBrowser1
            // 
            this.webBrowser1.Location = new System.Drawing.Point(10, 10);
            this.webBrowser1.MinimumSize = new System.Drawing.Size(20, 20);
            this.webBrowser1.Name = "webBrowser1";
            this.webBrowser1.Size = new System.Drawing.Size(1682, 433);
            this.webBrowser1.TabIndex = 2;
            this.webBrowser1.Url = new System.Uri("https://www.bing.com/", System.UriKind.Absolute);
            // 
            // soundStart
            // 
            this.soundStart.Location = new System.Drawing.Point(1703, 493);
            this.soundStart.Name = "soundStart";
            this.soundStart.Size = new System.Drawing.Size(100, 40);
            this.soundStart.TabIndex = 3;
            this.soundStart.Text = "soundStart";
            this.soundStart.UseVisualStyleBackColor = true;
            this.soundStart.Click += new System.EventHandler(this.soundStart_Click);
            // 
            // soundStop
            // 
            this.soundStop.Location = new System.Drawing.Point(1803, 493);
            this.soundStop.Name = "soundStop";
            this.soundStop.Size = new System.Drawing.Size(100, 40);
            this.soundStop.TabIndex = 4;
            this.soundStop.Text = "soundStop";
            this.soundStop.UseVisualStyleBackColor = true;
            this.soundStop.Click += new System.EventHandler(this.soundStop_Click);
            // 
            // ABCstart
            // 
            this.ABCstart.Location = new System.Drawing.Point(1703, 533);
            this.ABCstart.Name = "ABCstart";
            this.ABCstart.Size = new System.Drawing.Size(100, 40);
            this.ABCstart.TabIndex = 5;
            this.ABCstart.Text = "ABC start";
            this.ABCstart.UseVisualStyleBackColor = true;
            this.ABCstart.Click += new System.EventHandler(this.ABCstart_Click);
            // 
            // ABCstop
            // 
            this.ABCstop.Location = new System.Drawing.Point(1803, 533);
            this.ABCstop.Name = "ABCstop";
            this.ABCstop.Size = new System.Drawing.Size(100, 40);
            this.ABCstop.TabIndex = 6;
            this.ABCstop.Text = "ABC stop";
            this.ABCstop.UseVisualStyleBackColor = true;
            this.ABCstop.Click += new System.EventHandler(this.ABCstop_Click);
            // 
            // choiceMargin
            // 
            this.choiceMargin.Location = new System.Drawing.Point(1703, 623);
            this.choiceMargin.Name = "choiceMargin";
            this.choiceMargin.Size = new System.Drawing.Size(100, 28);
            this.choiceMargin.TabIndex = 7;
            this.choiceMargin.Text = "choiceMargin";
            this.choiceMargin.UseVisualStyleBackColor = true;
            this.choiceMargin.Click += new System.EventHandler(this.choiceMargin_Click);
            // 
            // abcMargin
            // 
            this.abcMargin.Location = new System.Drawing.Point(1803, 623);
            this.abcMargin.Name = "abcMargin";
            this.abcMargin.Size = new System.Drawing.Size(100, 28);
            this.abcMargin.TabIndex = 8;
            this.abcMargin.Text = "abcMargin";
            this.abcMargin.UseVisualStyleBackColor = true;
            this.abcMargin.Click += new System.EventHandler(this.abcMargin_Click);
            // 
            // choiceRand
            // 
            this.choiceRand.Location = new System.Drawing.Point(1703, 651);
            this.choiceRand.Name = "choiceRand";
            this.choiceRand.Size = new System.Drawing.Size(100, 40);
            this.choiceRand.TabIndex = 9;
            this.choiceRand.Text = "choiceRand";
            this.choiceRand.UseVisualStyleBackColor = true;
            this.choiceRand.Click += new System.EventHandler(this.choiceRand_Click);
            // 
            // choice1
            // 
            this.choice1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.choice1.Location = new System.Drawing.Point(13, 527);
            this.choice1.Multiline = true;
            this.choice1.Name = "choice1";
            this.choice1.Size = new System.Drawing.Size(0, 362);
            this.choice1.TabIndex = 11;
            this.choice1.Click += new System.EventHandler(this.choice1_Click);
            // 
            // choice2
            // 
            this.choice2.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.choice2.Location = new System.Drawing.Point(572, 527);
            this.choice2.Multiline = true;
            this.choice2.Name = "choice2";
            this.choice2.Size = new System.Drawing.Size(0, 362);
            this.choice2.TabIndex = 12;
            this.choice2.Click += new System.EventHandler(this.choice2_Click);
            // 
            // choice3
            // 
            this.choice3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.choice3.Location = new System.Drawing.Point(1131, 527);
            this.choice3.Multiline = true;
            this.choice3.Name = "choice3";
            this.choice3.Size = new System.Drawing.Size(0, 362);
            this.choice3.TabIndex = 13;
            this.choice3.Click += new System.EventHandler(this.choice3_Click);
            // 
            // textboxScore
            // 
            this.textboxScore.Location = new System.Drawing.Point(1703, 691);
            this.textboxScore.Multiline = true;
            this.textboxScore.Name = "textboxScore";
            this.textboxScore.Size = new System.Drawing.Size(200, 40);
            this.textboxScore.TabIndex = 14;
            this.textboxScore.Text = "Show Score : 0";
            // 
            // randStart
            // 
            this.randStart.Location = new System.Drawing.Point(1703, 573);
            this.randStart.Name = "randStart";
            this.randStart.Size = new System.Drawing.Size(100, 40);
            this.randStart.TabIndex = 15;
            this.randStart.Text = "randStart";
            this.randStart.UseVisualStyleBackColor = true;
            this.randStart.Click += new System.EventHandler(this.randStart_Click);
            // 
            // randStop
            // 
            this.randStop.Location = new System.Drawing.Point(1803, 573);
            this.randStop.Name = "randStop";
            this.randStop.Size = new System.Drawing.Size(100, 40);
            this.randStop.TabIndex = 16;
            this.randStop.Text = "randStop";
            this.randStop.UseVisualStyleBackColor = true;
            this.randStop.Click += new System.EventHandler(this.randStop_Click);
            // 
            // indexAll
            // 
            this.indexAll.Location = new System.Drawing.Point(1703, 412);
            this.indexAll.Multiline = true;
            this.indexAll.Name = "indexAll";
            this.indexAll.Size = new System.Drawing.Size(200, 30);
            this.indexAll.TabIndex = 17;
            // 
            // indexShow
            // 
            this.indexShow.Location = new System.Drawing.Point(1703, 443);
            this.indexShow.Multiline = true;
            this.indexShow.Name = "indexShow";
            this.indexShow.Size = new System.Drawing.Size(200, 40);
            this.indexShow.TabIndex = 18;
            this.indexShow.Text = "Show Index : 0";
            // 
            // indexTSearch
            // 
            this.indexTSearch.Location = new System.Drawing.Point(1703, 741);
            this.indexTSearch.Multiline = true;
            this.indexTSearch.Name = "indexTSearch";
            this.indexTSearch.Size = new System.Drawing.Size(200, 40);
            this.indexTSearch.TabIndex = 19;
            // 
            // textTSearch
            // 
            this.textTSearch.Location = new System.Drawing.Point(1703, 819);
            this.textTSearch.Multiline = true;
            this.textTSearch.Name = "textTSearch";
            this.textTSearch.Size = new System.Drawing.Size(200, 40);
            this.textTSearch.TabIndex = 20;
            // 
            // indexBSearch
            // 
            this.indexBSearch.Location = new System.Drawing.Point(1703, 781);
            this.indexBSearch.Name = "indexBSearch";
            this.indexBSearch.Size = new System.Drawing.Size(200, 28);
            this.indexBSearch.TabIndex = 21;
            this.indexBSearch.Text = "key Index to search";
            this.indexBSearch.UseVisualStyleBackColor = true;
            this.indexBSearch.Click += new System.EventHandler(this.indexBSearch_Click);
            // 
            // textBSearch
            // 
            this.textBSearch.Location = new System.Drawing.Point(1703, 859);
            this.textBSearch.Name = "textBSearch";
            this.textBSearch.Size = new System.Drawing.Size(200, 28);
            this.textBSearch.TabIndex = 22;
            this.textBSearch.Text = "key Text to search";
            this.textBSearch.UseVisualStyleBackColor = true;
            this.textBSearch.Click += new System.EventHandler(this.textBSearch_Click);
            // 
            // loadA
            // 
            this.loadA.Location = new System.Drawing.Point(1703, 10);
            this.loadA.Name = "loadA";
            this.loadA.Size = new System.Drawing.Size(100, 28);
            this.loadA.TabIndex = 23;
            this.loadA.Text = "A";
            this.loadA.UseVisualStyleBackColor = true;
            this.loadA.Click += new System.EventHandler(this.loadA_Click);
            // 
            // loadB
            // 
            this.loadB.Location = new System.Drawing.Point(1703, 38);
            this.loadB.Name = "loadB";
            this.loadB.Size = new System.Drawing.Size(100, 28);
            this.loadB.TabIndex = 24;
            this.loadB.Text = "B";
            this.loadB.UseVisualStyleBackColor = true;
            this.loadB.Click += new System.EventHandler(this.loadB_Click);
            // 
            // loadC
            // 
            this.loadC.Location = new System.Drawing.Point(1703, 66);
            this.loadC.Name = "loadC";
            this.loadC.Size = new System.Drawing.Size(100, 28);
            this.loadC.TabIndex = 25;
            this.loadC.Text = "C";
            this.loadC.UseVisualStyleBackColor = true;
            this.loadC.Click += new System.EventHandler(this.loadC_Click);
            // 
            // loadD
            // 
            this.loadD.Location = new System.Drawing.Point(1703, 94);
            this.loadD.Name = "loadD";
            this.loadD.Size = new System.Drawing.Size(100, 28);
            this.loadD.TabIndex = 26;
            this.loadD.Text = "D";
            this.loadD.UseVisualStyleBackColor = true;
            this.loadD.Click += new System.EventHandler(this.loadD_Click);
            // 
            // loadE
            // 
            this.loadE.Location = new System.Drawing.Point(1703, 122);
            this.loadE.Name = "loadE";
            this.loadE.Size = new System.Drawing.Size(100, 28);
            this.loadE.TabIndex = 27;
            this.loadE.Text = "E";
            this.loadE.UseVisualStyleBackColor = true;
            this.loadE.Click += new System.EventHandler(this.loadE_Click);
            // 
            // loadF
            // 
            this.loadF.Location = new System.Drawing.Point(1703, 150);
            this.loadF.Name = "loadF";
            this.loadF.Size = new System.Drawing.Size(100, 28);
            this.loadF.TabIndex = 28;
            this.loadF.Text = "F";
            this.loadF.UseVisualStyleBackColor = true;
            this.loadF.Click += new System.EventHandler(this.loadF_Click);
            // 
            // loadG
            // 
            this.loadG.Location = new System.Drawing.Point(1703, 178);
            this.loadG.Name = "loadG";
            this.loadG.Size = new System.Drawing.Size(100, 28);
            this.loadG.TabIndex = 29;
            this.loadG.Text = "G";
            this.loadG.UseVisualStyleBackColor = true;
            this.loadG.Click += new System.EventHandler(this.loadG_Click);
            // 
            // loadH
            // 
            this.loadH.Location = new System.Drawing.Point(1703, 206);
            this.loadH.Name = "loadH";
            this.loadH.Size = new System.Drawing.Size(100, 28);
            this.loadH.TabIndex = 30;
            this.loadH.Text = "H";
            this.loadH.UseVisualStyleBackColor = true;
            this.loadH.Click += new System.EventHandler(this.loadH_Click);
            // 
            // loadI
            // 
            this.loadI.Location = new System.Drawing.Point(1703, 234);
            this.loadI.Name = "loadI";
            this.loadI.Size = new System.Drawing.Size(100, 28);
            this.loadI.TabIndex = 31;
            this.loadI.Text = "I";
            this.loadI.UseVisualStyleBackColor = true;
            this.loadI.Click += new System.EventHandler(this.loadI_Click);
            // 
            // loadJ
            // 
            this.loadJ.Location = new System.Drawing.Point(1703, 262);
            this.loadJ.Name = "loadJ";
            this.loadJ.Size = new System.Drawing.Size(100, 28);
            this.loadJ.TabIndex = 32;
            this.loadJ.Text = "J";
            this.loadJ.UseVisualStyleBackColor = true;
            this.loadJ.Click += new System.EventHandler(this.loadJ_Click);
            // 
            // loadK
            // 
            this.loadK.Location = new System.Drawing.Point(1703, 290);
            this.loadK.Name = "loadK";
            this.loadK.Size = new System.Drawing.Size(100, 28);
            this.loadK.TabIndex = 33;
            this.loadK.Text = "K";
            this.loadK.UseVisualStyleBackColor = true;
            this.loadK.Click += new System.EventHandler(this.loadK_Click);
            // 
            // loadL
            // 
            this.loadL.Location = new System.Drawing.Point(1703, 318);
            this.loadL.Name = "loadL";
            this.loadL.Size = new System.Drawing.Size(100, 28);
            this.loadL.TabIndex = 34;
            this.loadL.Text = "L";
            this.loadL.UseVisualStyleBackColor = true;
            this.loadL.Click += new System.EventHandler(this.loadL_Click);
            // 
            // loadM
            // 
            this.loadM.Location = new System.Drawing.Point(1703, 346);
            this.loadM.Name = "loadM";
            this.loadM.Size = new System.Drawing.Size(100, 28);
            this.loadM.TabIndex = 35;
            this.loadM.Text = "M";
            this.loadM.UseVisualStyleBackColor = true;
            this.loadM.Click += new System.EventHandler(this.loadM_Click);
            // 
            // loadN
            // 
            this.loadN.Location = new System.Drawing.Point(1803, 10);
            this.loadN.Name = "loadN";
            this.loadN.Size = new System.Drawing.Size(100, 28);
            this.loadN.TabIndex = 36;
            this.loadN.Text = "N";
            this.loadN.UseVisualStyleBackColor = true;
            this.loadN.Click += new System.EventHandler(this.loadN_Click);
            // 
            // loadO
            // 
            this.loadO.Location = new System.Drawing.Point(1803, 38);
            this.loadO.Name = "loadO";
            this.loadO.Size = new System.Drawing.Size(100, 28);
            this.loadO.TabIndex = 37;
            this.loadO.Text = "O";
            this.loadO.UseVisualStyleBackColor = true;
            this.loadO.Click += new System.EventHandler(this.loadO_Click);
            // 
            // loadP
            // 
            this.loadP.Location = new System.Drawing.Point(1803, 66);
            this.loadP.Name = "loadP";
            this.loadP.Size = new System.Drawing.Size(100, 28);
            this.loadP.TabIndex = 38;
            this.loadP.Text = "P";
            this.loadP.UseVisualStyleBackColor = true;
            this.loadP.Click += new System.EventHandler(this.loadP_Click);
            // 
            // loadQ
            // 
            this.loadQ.Location = new System.Drawing.Point(1803, 94);
            this.loadQ.Name = "loadQ";
            this.loadQ.Size = new System.Drawing.Size(100, 28);
            this.loadQ.TabIndex = 39;
            this.loadQ.Text = "Q";
            this.loadQ.UseVisualStyleBackColor = true;
            this.loadQ.Click += new System.EventHandler(this.loadQ_Click);
            // 
            // loadR
            // 
            this.loadR.Location = new System.Drawing.Point(1803, 122);
            this.loadR.Name = "loadR";
            this.loadR.Size = new System.Drawing.Size(100, 28);
            this.loadR.TabIndex = 40;
            this.loadR.Text = "R";
            this.loadR.UseVisualStyleBackColor = true;
            this.loadR.Click += new System.EventHandler(this.loadR_Click);
            // 
            // loadS
            // 
            this.loadS.Location = new System.Drawing.Point(1803, 150);
            this.loadS.Name = "loadS";
            this.loadS.Size = new System.Drawing.Size(100, 28);
            this.loadS.TabIndex = 41;
            this.loadS.Text = "S";
            this.loadS.UseVisualStyleBackColor = true;
            this.loadS.Click += new System.EventHandler(this.loadS_Click);
            // 
            // loadT
            // 
            this.loadT.Location = new System.Drawing.Point(1803, 178);
            this.loadT.Name = "loadT";
            this.loadT.Size = new System.Drawing.Size(100, 28);
            this.loadT.TabIndex = 42;
            this.loadT.Text = "T";
            this.loadT.UseVisualStyleBackColor = true;
            this.loadT.Click += new System.EventHandler(this.loadT_Click);
            // 
            // loadU
            // 
            this.loadU.Location = new System.Drawing.Point(1803, 206);
            this.loadU.Name = "loadU";
            this.loadU.Size = new System.Drawing.Size(100, 28);
            this.loadU.TabIndex = 43;
            this.loadU.Text = "U";
            this.loadU.UseVisualStyleBackColor = true;
            this.loadU.Click += new System.EventHandler(this.loadU_Click);
            // 
            // loadV
            // 
            this.loadV.Location = new System.Drawing.Point(1803, 234);
            this.loadV.Name = "loadV";
            this.loadV.Size = new System.Drawing.Size(100, 28);
            this.loadV.TabIndex = 44;
            this.loadV.Text = "V";
            this.loadV.UseVisualStyleBackColor = true;
            this.loadV.Click += new System.EventHandler(this.loadV_Click);
            // 
            // loadW
            // 
            this.loadW.Location = new System.Drawing.Point(1803, 262);
            this.loadW.Name = "loadW";
            this.loadW.Size = new System.Drawing.Size(100, 28);
            this.loadW.TabIndex = 45;
            this.loadW.Text = "W";
            this.loadW.UseVisualStyleBackColor = true;
            this.loadW.Click += new System.EventHandler(this.loadW_Click);
            // 
            // loadX
            // 
            this.loadX.Location = new System.Drawing.Point(1803, 290);
            this.loadX.Name = "loadX";
            this.loadX.Size = new System.Drawing.Size(100, 28);
            this.loadX.TabIndex = 46;
            this.loadX.Text = "X";
            this.loadX.UseVisualStyleBackColor = true;
            this.loadX.Click += new System.EventHandler(this.loadX_Click);
            // 
            // loadY
            // 
            this.loadY.Location = new System.Drawing.Point(1803, 318);
            this.loadY.Name = "loadY";
            this.loadY.Size = new System.Drawing.Size(100, 28);
            this.loadY.TabIndex = 47;
            this.loadY.Text = "Y";
            this.loadY.UseVisualStyleBackColor = true;
            this.loadY.Click += new System.EventHandler(this.loadY_Click);
            // 
            // loadZ
            // 
            this.loadZ.Location = new System.Drawing.Point(1803, 346);
            this.loadZ.Name = "loadZ";
            this.loadZ.Size = new System.Drawing.Size(100, 28);
            this.loadZ.TabIndex = 48;
            this.loadZ.Text = "Z";
            this.loadZ.UseVisualStyleBackColor = true;
            this.loadZ.Click += new System.EventHandler(this.loadZ_Click);
            // 
            // loadAZ
            // 
            this.loadAZ.Location = new System.Drawing.Point(1703, 374);
            this.loadAZ.Name = "loadAZ";
            this.loadAZ.Size = new System.Drawing.Size(100, 28);
            this.loadAZ.TabIndex = 49;
            this.loadAZ.Text = "A-Z";
            this.loadAZ.UseVisualStyleBackColor = true;
            this.loadAZ.Click += new System.EventHandler(this.loadAZ_Click);
            // 
            // swapGroup
            // 
            this.swapGroup.Location = new System.Drawing.Point(1803, 374);
            this.swapGroup.Name = "swapGroup";
            this.swapGroup.Size = new System.Drawing.Size(100, 28);
            this.swapGroup.TabIndex = 50;
            this.swapGroup.Text = "swapGroup";
            this.swapGroup.UseVisualStyleBackColor = true;
            this.swapGroup.Click += new System.EventHandler(this.swapGroup_Click);
            // 
            // choiceSeq
            // 
            this.choiceSeq.Location = new System.Drawing.Point(1803, 651);
            this.choiceSeq.Name = "choiceSeq";
            this.choiceSeq.Size = new System.Drawing.Size(100, 40);
            this.choiceSeq.TabIndex = 51;
            this.choiceSeq.Text = "choiceSeq";
            this.choiceSeq.UseVisualStyleBackColor = true;
            this.choiceSeq.Click += new System.EventHandler(this.choiceSeq_Click);
            // 
            // textboxChoice1
            // 
            this.textboxChoice1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textboxChoice1.Location = new System.Drawing.Point(13, 527);
            this.textboxChoice1.Multiline = true;
            this.textboxChoice1.Name = "textboxChoice1";
            this.textboxChoice1.Size = new System.Drawing.Size(0, 362);
            this.textboxChoice1.TabIndex = 52;
            this.textboxChoice1.Click += new System.EventHandler(this.textboxChoice1_Click);
            // 
            // textboxChoice2
            // 
            this.textboxChoice2.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textboxChoice2.Location = new System.Drawing.Point(572, 527);
            this.textboxChoice2.Multiline = true;
            this.textboxChoice2.Name = "textboxChoice2";
            this.textboxChoice2.Size = new System.Drawing.Size(0, 362);
            this.textboxChoice2.TabIndex = 53;
            this.textboxChoice2.Click += new System.EventHandler(this.textboxChoice2_Click);
            // 
            // textboxChoice3
            // 
            this.textboxChoice3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textboxChoice3.Location = new System.Drawing.Point(1131, 527);
            this.textboxChoice3.Multiline = true;
            this.textboxChoice3.Name = "textboxChoice3";
            this.textboxChoice3.Size = new System.Drawing.Size(0, 362);
            this.textboxChoice3.TabIndex = 54;
            this.textboxChoice3.Click += new System.EventHandler(this.textboxChoice3_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.textboxChoice3);
            this.Controls.Add(this.textboxChoice2);
            this.Controls.Add(this.textboxChoice1);
            this.Controls.Add(this.choiceSeq);
            this.Controls.Add(this.swapGroup);
            this.Controls.Add(this.loadAZ);
            this.Controls.Add(this.loadZ);
            this.Controls.Add(this.loadY);
            this.Controls.Add(this.loadX);
            this.Controls.Add(this.loadW);
            this.Controls.Add(this.loadV);
            this.Controls.Add(this.loadU);
            this.Controls.Add(this.loadT);
            this.Controls.Add(this.loadS);
            this.Controls.Add(this.loadR);
            this.Controls.Add(this.loadQ);
            this.Controls.Add(this.loadP);
            this.Controls.Add(this.loadO);
            this.Controls.Add(this.loadN);
            this.Controls.Add(this.loadM);
            this.Controls.Add(this.loadL);
            this.Controls.Add(this.loadK);
            this.Controls.Add(this.loadJ);
            this.Controls.Add(this.loadI);
            this.Controls.Add(this.loadH);
            this.Controls.Add(this.loadG);
            this.Controls.Add(this.loadF);
            this.Controls.Add(this.loadE);
            this.Controls.Add(this.loadD);
            this.Controls.Add(this.loadC);
            this.Controls.Add(this.loadB);
            this.Controls.Add(this.loadA);
            this.Controls.Add(this.textBSearch);
            this.Controls.Add(this.indexBSearch);
            this.Controls.Add(this.textTSearch);
            this.Controls.Add(this.indexTSearch);
            this.Controls.Add(this.indexShow);
            this.Controls.Add(this.indexAll);
            this.Controls.Add(this.randStop);
            this.Controls.Add(this.randStart);
            this.Controls.Add(this.textboxScore);
            this.Controls.Add(this.choice3);
            this.Controls.Add(this.choice2);
            this.Controls.Add(this.choice1);
            this.Controls.Add(this.choiceRand);
            this.Controls.Add(this.abcMargin);
            this.Controls.Add(this.choiceMargin);
            this.Controls.Add(this.ABCstop);
            this.Controls.Add(this.ABCstart);
            this.Controls.Add(this.soundStop);
            this.Controls.Add(this.soundStart);
            this.Controls.Add(this.webBrowser1);
            this.Controls.Add(this.textboxM);
            this.Controls.Add(this.textboxW);
            this.Name = "Form1";
            this.Text = "AdvancedABC";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.Form1_Paint);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textboxW;
        private System.Windows.Forms.TextBox textboxM;
        private System.Windows.Forms.WebBrowser webBrowser1;
        private System.Windows.Forms.Button soundStart;
        private System.Windows.Forms.Button soundStop;
        private System.Windows.Forms.Button ABCstart;
        private System.Windows.Forms.Button ABCstop;
        private System.Windows.Forms.Button choiceMargin;
        private System.Windows.Forms.Button abcMargin;
        private System.Windows.Forms.Button choiceRand;
        private System.Windows.Forms.TextBox choice1;
        private System.Windows.Forms.TextBox choice2;
        private System.Windows.Forms.TextBox choice3;
        private System.Windows.Forms.TextBox textboxScore;
        private System.Windows.Forms.Button randStart;
        private System.Windows.Forms.Button randStop;
        private System.Windows.Forms.TextBox indexAll;
        private System.Windows.Forms.TextBox indexShow;
        private System.Windows.Forms.TextBox indexTSearch;
        private System.Windows.Forms.TextBox textTSearch;
        private System.Windows.Forms.Button indexBSearch;
        private System.Windows.Forms.Button textBSearch;
        private System.Windows.Forms.Button loadA;
        private System.Windows.Forms.Button loadB;
        private System.Windows.Forms.Button loadC;
        private System.Windows.Forms.Button loadD;
        private System.Windows.Forms.Button loadE;
        private System.Windows.Forms.Button loadF;
        private System.Windows.Forms.Button loadG;
        private System.Windows.Forms.Button loadH;
        private System.Windows.Forms.Button loadI;
        private System.Windows.Forms.Button loadJ;
        private System.Windows.Forms.Button loadK;
        private System.Windows.Forms.Button loadL;
        private System.Windows.Forms.Button loadM;
        private System.Windows.Forms.Button loadN;
        private System.Windows.Forms.Button loadO;
        private System.Windows.Forms.Button loadP;
        private System.Windows.Forms.Button loadQ;
        private System.Windows.Forms.Button loadR;
        private System.Windows.Forms.Button loadS;
        private System.Windows.Forms.Button loadT;
        private System.Windows.Forms.Button loadU;
        private System.Windows.Forms.Button loadV;
        private System.Windows.Forms.Button loadW;
        private System.Windows.Forms.Button loadX;
        private System.Windows.Forms.Button loadY;
        private System.Windows.Forms.Button loadZ;
        private System.Windows.Forms.Button loadAZ;
        private System.Windows.Forms.Button swapGroup;
        private System.Windows.Forms.Button choiceSeq;
        private System.Windows.Forms.TextBox textboxChoice1;
        private System.Windows.Forms.TextBox textboxChoice2;
        private System.Windows.Forms.TextBox textboxChoice3;
    }
}

