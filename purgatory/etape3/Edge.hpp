
class Edge
{
	Edge(char c) : c(c) {}
	
	~Edge() {}
	
	bool operator== (const Edge& e)
	{
	if (this->c == e->getC())
		return true;
	return false;
	}
	
	char getC()
	{
	return this->c;
	}
	
	bool operator() (char c)
	{
	if (this->c == e->getC())
		return true;
	return false;
	}
	
	private:
	char c;
};
