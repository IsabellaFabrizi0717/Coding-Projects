Matrix quaternion_to_cbn(Matrix quaternion)
{
    double e0=quat.select(1,1);
    double e1=quat.select(2,1);
    double e2=quat.select(3,1);
    double e3=quat.select(4,1);
    Matrix cbn= Matrix(3,3);
    vector<double> cbn_values={e0**2 + e1**2-e2**2-e3**2, 
                                2*(e1*e2 - e0e3),
                                2*(e1*e3 + e0e2),
                                2*(e1*e2 + e0e3),
                                e0**2 - e1**2 + e2**2-e3**2,
                                2*(e2*e3 - e0e1),
                                2*(e1*e3 - e0e2), 
                                2*(e2*e3 + e0e1),
                                e0**2 - e1**2 - e2**2 + e3**2};
    cbn.assign(cbn_values);
    return cbn;
}

Matrix euler_to_quaternion(vector<double> rpy)
{
    double phi = rpy.at(0);  
    double theta = rpy.at(1); 
    double psi = rpy.at(2); 

    double e0 = cos(phi/2)*cos(theta/2)*cos(psi/2) + sin(phi/2)*sin(theta/2)*sin(psi/2)
    double e1 = sin(phi/2)*cos(theta/2)*cos(psi/2) - cos(phi/2)*sin(theta/2)*sin(psi/2)
    double e2 = cos(phi/2)*sin(theta/2)*cos(psi/2) + sin(phi/2)*cos(theta/2)*sin(psi/2)
    double e3 = cos(phi/2)*cos(theta/2)*sin(psi/2) - sin(phi/2)*cos(theta/2)*cos(psi/2)
    Matrix quaternion_vector = Matrix(4, 1,
                                        {e0, e1, e2, e3});
    )
}
