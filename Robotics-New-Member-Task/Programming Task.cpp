using namespace std;

int vsense = 0;
int vbatt = 0;

void vbattRead()
{
	vsense = analogRead() * (3.3/1023);
	vbatt = vsense / (2/(10+2));
	
	cout<<"Battery voltage: "<<vbatt<<endl; //assume cout for printing
	
	if(vbatt<12 && vbatt>16.8)
	cout<<"Warning"<<endl; //assume cout for printing
	
	return;
}