class Triangle
{

private:
    // double side1;
    // double side2;
    // double side3;

    double sides[3];

public:
    // Constructor
    Triangle(double s1, double s2, double s3)
    {
        this->sides[0] = s1;
        this->sides[1] = s2;
        this->sides[2] = s3;
    }

    // Getters
    double getSide1() { return this->sides[0]; }
    double getSide2() { return this->sides[1]; }
    double getSide3() { return this->sides[2]; }

    // Setters
    void setSide(double s1, double s2, double s3)
    {
        this->sides[0] = s1;
        this->sides[1] = s2;
        this->sides[2] = s3;
    }

    // Instances methods
    double getArea();

    // Static methods
    static double sumAreas(Triangle *triangles[], int numTriangles)
    {
        double sum = 0.0;
        for (int i = 0; i < numTriangles; i++)
        {
            sum += triangles[i]->getArea();
        }
        return sum;
    }
};
