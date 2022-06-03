struct MHS {
  string id,nama,prodi,notelp;
};

struct MHS mhs[10];
void Sorting::input() {
cout<<"\t\t"<<"================================"<<endl;
cout<<"DAFTAR MAHASISWA"<<endl;
cout<<"======================================"<<endl;
cout<<"Masukan banyak data = ";
cin>>n;
for(int i=0;i<n;i++) {
cout<<"\nMasukkan NIM : ";
cin>>mhs[i].id;
cout<<"Masukkan Nama : ";
cin>>mhs[i].nama;
cout<<"Masukkan Prodi : ";
cin>>mhs[i].prodi;
cout<<"Masukkan No Telp : ";
cin>>mhs[i].notelp;
cout<<endl;
}
}
void Sorting::tofilea() {
  ofstream kefile;
  kefile.open("data.txt");
  kefile << n;
}
