import 'dart:io';

int factorisation(int n){
    if n==0 return 1;
    return n * factorisation(n-1);
}

void main(){
    int? m = int.Parse(stdin.readLineSync()!);
    print("$factorisation(m)");
}