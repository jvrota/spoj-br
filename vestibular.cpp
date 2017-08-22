#include<iostream>
#include<string>

using namespace std;
int main(){

		int questdaprova, acertosdocandidato=0;
			cin>>questdaprova;
 
		char gabaritocorreto[questdaprova],resposta[questdaprova];
			gabaritocorreto[0]=0;

		for(int i=1;i<=questdaprova;i++){
			cin>>gabaritocorreto[i]; 
}
		for(int i=1;i<=questdaprova;i++){
			cin>>resposta[i];

		if(resposta[i]==gabaritocorreto[i])
			acertosdocandidato++;
}
			cout<<acertosdocandidato<<endl;
return 0;
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49

