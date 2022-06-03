void Sorting::getFile() {
  ifstream getfile;
  getfile.open("data.txt");
  while (!getfile.eof()) {
    getfile >> byk_org;
  }
}
void Sorting::urutkan() {
  //ascending
  for (int i=0;i<byk_org;i++) {
    for (int j=0;j<byk_org-1;j++) {
      if (mhs[j].id > mhs[j+1].id) {
        
        id_temp = mhs[j].id;
        nama_temp = mhs[j].nama;
        prodi_temp = mhs[j].prodi;
        telp_temp = mhs[j].notelp;

        mhs[j].id = mhs[j+1].id;
        mhs[j].nama = mhs[j+1].nama;
        mhs[j].prodi = mhs[j+1].prodi;
        mhs[j].notelp = mhs[j+1].notelp;

        mhs[j+1].id = id_temp;
        mhs[j+1].nama = nama_temp;
        mhs[j+1].prodi = prodi_temp;
        mhs[j+1].notelp = telp_temp;
        
      }
    }
  }
}

void Sorting::toFileb() {
  ofstream kefile;
  kefile.open("data.txt");
  kefile << byk_org;
}
