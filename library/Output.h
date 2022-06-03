void Sorting::data(){
  getdata.open("data.txt");
  while(!getdata.eof()){
    getdata >> byk_org;
  }
}

void Sorting::output(){
  cout << "============================================" << endl;
  cout << "|                Daftar Mahasiswa               |" << endl;
  cout << "============================================" << endl;
  cout << "============================================" << endl;
  cout << "|   NIM  |  NAMA  |  PRODI  |  NO. TELP  |" << endl;
  cout << "============================================" << endl;

  cout << "ASCENDING" << endl;
  for(int i=0; i<byk_org ; i++){
    cout << "--------------------------------------------" << endl;
    cout << mhs[i].id << "      " << mhs[i].nama << "   " << mhs[i].prodi << "   " << mhs[i].notelp << endl;
  }
  cout << "--------------------------------------------" << endl;

  cout << "DESCENDING" << endl;
  for(int i=byk_org-1; i>=0 ; i--){
    cout << "--------------------------------------------" << endl;
    cout << mhs[i].id << "      " << mhs[i].nama << "    " << mhs[i].prodi << "    " << mhs[i].notelp << endl;
  }
  cout << "--------------------------------------------" << endl;
}
void Sorting::cari() {
  cout << "\nMasukkan NIM untuk mendapatkan data Anda = ";
  cin >> id;
  for (int i=0;i<byk_org;i++) {
    if (mhs[i].id==id) {
      cout << "NIM    : " << mhs[i].id << endl;
      cout << "Nama    : " << mhs[i].nama << endl;
      cout << "Prodi : " << mhs[i].prodi << endl;
      cout << "No.telp : " << mhs[i].notelp << endl;
      break;
    }
  }
}

