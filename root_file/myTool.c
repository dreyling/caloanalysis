int main()
{
  //Runs triggering in the 4 PMT's without copper plate
/*
  //run262 - 6GeV
  TFile * f262 = new TFile("../tb_data_summie19/RootFiles/run262_cal.root","RED");
  TTree * t262 = (TTree*)f262->Get("T");
  TCanvas *c262 = new TCanvas("c262","",800,800);
  t262->Draw("y_0>>h(4000,-1,8)");
  t262->SetLineColor(1);
  gROOT->ForceStyle();
  t262->Draw("y_4+y_6","","same");
  t262->SetLineColor(2);
  t262->Draw("y_0+y_4+y_6","","same");
  t262->SetLineColor(3);
  TCanvas *c262_corr = new TCanvas("c262_corr","",800,800);
  t262->Draw("y_0:(y_4+y_6)","y_0<10 && y_4<10");
  TLine *corr262 = new TLine(0,6,6,0);
  corr262->SetLineColor(kRed);
  corr262->Draw();
*/
/*
  //run 264 - 5 GeV
  TFile * f264 = new TFile("../tb_data_summie19/RootFiles/run264_cal.root","RED");
  TTree * t264 = (TTree*)f264->Get("T");
  TCanvas *c264 = new TCanvas("c264","",800,800);
  t264->Draw("y_0>>h(4000,-1,8)");
  t264->SetLineColor(1);
  gROOT->ForceStyle();
  t264->Draw("y_6","","same");
  t264->SetLineColor(2);
  t264->Draw("y_0+y_6","","same");
  t264->SetLineColor(3);
  TCanvas *c264_corr = new TCanvas("c264_corr","",800,800);
  t264->Draw("y_0:y_6","y_0<10 && y_6<10");
  TLine *corr264 = new TLine(0,5,5,0);
  corr264->SetLineColor(kRed);
  corr264->Draw();
*/
/*
  //run 265 - 4 GeV
  TFile * f265 = new TFile("../tb_data_summie19/RootFiles/run265_cal.root","RED");
  TTree * t265 = (TTree*)f265->Get("T");
  TCanvas *c265 = new TCanvas("c265","",800,800);
  t265->Draw("y_0>>h(4000,-1,8)");
  t265->SetLineColor(1);
  gROOT->ForceStyle();
  t265->Draw("y_6+y_8","","same");
  t265->SetLineColor(2);
  t265->Draw("y_0+y_6+y_8","","same");
  t265->SetLineColor(3);
  TCanvas *c265_corr = new TCanvas("c265_corr","",800,800);
  t265->Draw("y_0:(y_6+y_8)","y_0<10 && (y_6+y_8)<10");
  TLine *corr265 = new TLine(0,4,4,0);
  corr265->SetLineColor(kRed);
  corr265->Draw();
*/
/*
  //Runs triggering in the 4 PMT's with copper plate
  //run246 - 3 GeV
  TFile * f246 = new TFile("../tb_data_summie19/RootFiles/run246_cal.root","RED");
  TTree * t246 = (TTree*)f246->Get("T");
  TCanvas *c246 = new TCanvas("c246","",800,800);
  t246->Draw("y_0>>h(4000,-1,8)");
  t246->SetLineColor(1);
  gROOT->ForceStyle();
  t246->Draw("y_6","","same");
  t246->SetLineColor(2);
  t246->Draw("y_0+y_6","","same");
  t246->SetLineColor(3);
  TCanvas *c246_corr = new TCanvas("c246_corr","",800,800);
  t246->Draw("y_0:y_6","y_0<10 && y_6<10");
  TLine *corr246 = new TLine(0,3,3,0);
  corr246->SetLineColor(kRed);
  corr246->Draw();
*/
/*
  //run249 - 2.2 GeV
  TFile * f249 = new TFile("../tb_data_summie19/RootFiles/run249_cal.root","RED");
  TTree * t249 = (TTree*)f249->Get("T");
  TCanvas *c249 = new TCanvas("c249","",800,800);
  t249->Draw("y_0>>h(4000,-1,8)");
  t249->SetLineColor(1);
  gROOT->ForceStyle();
  t249->Draw("y_8","","same");
  t249->SetLineColor(2);
  t249->Draw("y_0+y_8","","same");
  t249->SetLineColor(3);
  TCanvas *c249_corr = new TCanvas("c249_corr","",800,800);
  t249->Draw("y_0:y_8");
  TLine *corr249 = new TLine(0,2.4,2.4,0);
  corr249->SetLineColor(kRed);
  corr249->Draw();
*/
/*
  //run 252 - 6 GeV
  TFile * f252 = new TFile("../tb_data_summie19/RootFiles/run252_cal.root","RED");
  TTree * t252 = (TTree*)f252->Get("T");
  TCanvas *c252 = new TCanvas("c252","",800,800);
  t252->Draw("y_0>>h(4000,-1,8)");
  t252->SetLineColor(1);
  gROOT->ForceStyle();
  t252->Draw("y_4+y_6","","same");
  t252->SetLineColor(2);
  t252->Draw("y_0+y_4+y_6","","same");
  t252->SetLineColor(3);
  TCanvas *c252_corr = new TCanvas("c252_corr","",800,800);
  t252->Draw("y_0:(y_4+y_6)","y_0<10 && (y_4+y_6)<10");
  TLine *corr252 = new TLine(0,6,6,0);
  corr252->SetLineColor(kRed);
  corr252->Draw();
*/
/*
  //run257 - 5 GeV
  TFile * f257 = new TFile("../tb_data_summie19/RootFiles/run257_cal.root","RED");
  TTree * t257 = (TTree*)f257->Get("T");
  TCanvas *c257 = new TCanvas("c257","",800,800);
  t257->Draw("y_0>>h(4000,-1,8)");
  t257->SetLineColor(1);
  gROOT->ForceStyle();
  t257->Draw("y_6","","same");
  t257->SetLineColor(2);
  t257->Draw("y_0+y_6","","same");
  t257->SetLineColor(3);
  TCanvas *c257_corr = new TCanvas("c257_corr","",800,800);
  t257->Draw("y_0:y_6","y_0<10 && y_6<10");
  TLine *corr257 = new TLine(0,5,5,0);
  corr257->SetLineColor(kRed);
  corr257->Draw();
*/
/*
  //run259 - 4 GeV
  TFile * f259 = new TFile("../tb_data_summie19/RootFiles/run259_cal.root","RED");
  TTree * t259 = (TTree*)f259->Get("T");
  TCanvas *c259 = new TCanvas("c259","",800,800);
  t259->Draw("y_0>>h(4000,-1,8)");
  t259->SetLineColor(1);
  gROOT->ForceStyle();
  t259->Draw("y_6+y_8","","same");
  t259->SetLineColor(2);
  t259->Draw("y_0+y_6+y_8","","same");
  t259->SetLineColor(3);
  TCanvas *c259_corr = new TCanvas("c259_corr","",800,800);
  t259->Draw("y_0:(y_6+y_8)","y_0<10 && (y_6+y_8)<10");
  TLine *corr259 = new TLine(0,4,4,0);
  corr259->SetLineColor(kRed);
  corr259->Draw();
*/
/*
  //Runs triggering in the first 2 PMT's with copper plate
  //run266 - 5 GeV
  TFile * f266 = new TFile("../tb_data_summie19/RootFiles/run266_cal.root","RED");
  TTree * t266 = (TTree*)f266->Get("T");
  TCanvas *c266 = new TCanvas("c266","",800,800);
  c266->SetLogy();
  t266->Draw("y_0>>h(400,0,8)");
  t266->SetLineColor(1);
  gROOT->ForceStyle();
  t266->Draw("y_4","","same");
  t266->Draw("y_6","","same");
  t266->Draw("y_8","","same");
  t266->SetLineColor(2);
  t266->Draw("y_0+y_4+y_6+y_8","(y_4+y_6+y_8)>0","same");
  t266->SetLineColor(3);
  TCanvas *c266_corr = new TCanvas("c266_corr","",800,800);
  t266->Draw("y_0:(y_4+y_6+y_8)","y_0<10 && (y_4+y_6+y_8)<10 && y_0>0 && (y_4+y_6+y_8)>0");
  TLine *corr266 = new TLine(0,5,5,0);
  corr266->SetLineColor(kRed);
  corr266->Draw();
*/
/*
  //run267 - 6 GeV
  TFile * f267 = new TFile("../tb_data_summie19/RootFiles/run267_cal.root","RED");
  TTree * t267 = (TTree*)f267->Get("T");
  TCanvas *c267 = new TCanvas("c267","",800,800);
  c267->SetLogy();
  t267->Draw("y_0>>h(400,0,8)");
  t267->SetLineColor(1);
  gROOT->ForceStyle();
  t267->Draw("y_4","","same");
  t267->Draw("y_6","","same");
  t267->SetLineColor(2);
  t267->Draw("y_0+y_4+y_6","(y_4+y_6)>0","same");
  t267->SetLineColor(3);
  TCanvas *c267_corr = new TCanvas("c267_corr","",800,800);
  t267->Draw("y_0:(y_4+y_6)","y_0<10 && (y_4+y_6)<10 && y_0>0 && (y_4+y_6)>0");
  TLine *corr267 = new TLine(0,6,6,0);
  corr267->SetLineColor(kRed);
  corr267->Draw();
*/
/*
  //run271 - 2 GeV
  TFile * f271 = new TFile("../tb_data_summie19/RootFiles/run271_cal.root","RED");
  TTree * t271 = (TTree*)f271->Get("T");
  TCanvas *c271 = new TCanvas("c271","",800,800);
  c271->SetLogy();
  t271->Draw("y_0>>h(400,0,8)");
  t271->SetLineColor(1);
  gROOT->ForceStyle();
  t271->Draw("y_8","","same");
  t271->SetLineColor(2);
  t271->Draw("y_0+y_8","y_8>0","same");
  t271->SetLineColor(3);
  TCanvas *c271_corr = new TCanvas("c271_corr","",800,800);
  t271->Draw("y_0:y_8","y_0<10 && y_8<10 && y_0>0 && y_8>0");
  TLine *corr271 = new TLine(0,2,2,0);
  corr271->SetLineColor(kRed);
  corr271->Draw();
*/  
  //run269 - 4 GeV
  TFile * f269 = new TFile("../tb_data_summie19/RootFiles/run269_2_cal_off_noforce.root","RED");
  TTree * t269 = (TTree*)f269->Get("T");
  gROOT->ForceStyle();
  //photon spectrum 
  TCanvas *c269_ph = new TCanvas("c269_ph","",800,800);
  c269_ph->SetLogy();
  t269->Draw("y_0","y_0<10 && y_0>0");
  //electron spectrum
  TCanvas *c269_e = new TCanvas("c269_e","",800,800);
  c269_e->SetLogy();
  t269->Draw("y_4","y_4<10 && y_4>0");
  t269->SetLineColor(1);
  t269->Draw("y_6","y_6<10 && y_6>0","same");
  t269->SetLineColor(2);
  t269->Draw("y_8","y_8<10 && y_8>0","same");
  t269->SetLineColor(3);
  //sum spectrum
  TCanvas *c269_s = new TCanvas("c269_s","",800,800);
  c269_s->SetLogy();
  t269->SetLineColor(1);
  t269->Draw("y_0+y_4+y_6+y_8","(y_0+y_4+y_6+y_8) < 10 && (y_0+y_4+y_6+y_8) > 0");
  TLine *E_4 = new TLine(4,0,4,50000);
  E_4->SetLineColor(kBlue);
  E_4->Draw();
  //correlation
  TCanvas *c269_corr = new TCanvas("c269_corr","",800,800);
  t269->Draw("y_0:(y_4+y_6+y_8)","y_0<10 && (y_4+y_6+y_8)<10 && y_0>0 && (y_4+y_6+y_8)>0");
  TLine *corr269 = new TLine(0,4,4,0);
  TLine *corr269_2 = new TLine(0,8,8,0);
  corr269->SetLineColor(kRed);
  corr269->Draw();
  corr269_2->SetLineColor(kBlue);
  corr269_2->Draw();
}

