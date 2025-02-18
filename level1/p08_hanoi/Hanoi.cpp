#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

#define INF 0x7f7f7f7f

#define max(x,y) (x)>(y)?(x):(y)
#define min(x,y) (x)<(y)?(x):(y)
#define swap(x,y) {int T=x; x=y; y=T;}
#define wipe(x,y) memset(x,y,sizeof(x))
#define rep(x,y,z) for(int x=y,I=z;x<=I;++x)

#define dbgIn(x) freopen(x".in","r+",stdin)
#define dbgOut(x) freopen(x".out","w+",stdout)

typedef long long LL;
typedef unsigned long long ULL;

inline void Read(int &x){
	x=0; char ch=getchar();
	while(ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
}

void Hanoi(int Layer,int Cur,int Dst,int Tmp){
	if(Layer == 1)
		printf("%c -> %c\n",'A'+Cur,'A'+Dst);
	else{
		Hanoi(Layer-1,Cur,Tmp,Dst);
		printf("%c -> %c\n",'A'+Cur,'A'+Dst);
		Hanoi(Layer-1,Tmp,Cur,Dst);
	}
}

int main(){
	Hanoi(64,0,1,2);
	return 0;
}

