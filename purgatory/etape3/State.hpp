
#include <string>

class State
{
	State(const std::string& name, bool final = false) : name(name), isFinale(final)
	{
	}
	
	operator==(const State& s)
	{
	}
	

private:
	std::string name;
	bool		isfinale;
};