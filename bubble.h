class Bubble 
{
  public:
    double GetRadius() const;
    void SetRadius(double tRadius); 
    double CalculateVolume();

  private:
    double radius_;
};

Bubble CombineBubbles(Bubble &b1, Bubble &b2);
