#include "Cluster.h"

namespace Clustering{
    
    unsigned int Cluster::__idGenerator = 0;
    
    
    const Point Cluster::Centroid::get() const{
        
    }
    void Cluster::Centroid::set(const Point &p){
        
    }
    bool Cluster::Centroid::isValid() const{
        
    }
    void Cluster::Centroid::setValid(bool valid){
        
    }
    void Cluster::Centroid::compute(){
        
    }
    bool Cluster::Centroid::equal(const Point & a) const{
        
    }
    void Cluster::Centroid::toInfinity(){
        
    }
    
    
    
    
    
    
    Cluster::Cluster(unsigned int d) : __dimensionality(d), __size(0), __points(nullptr), __id(__idGenerator++), centroid(d, *this){
        
    }
    
    // The big three: cpy ctor, overloaded operator=, dtor
    
    Cluster::Cluster(const Cluster & copy){
        
    }
    
    Cluster &Cluster::operator=(const Cluster & copy) {
        __size = copy.__size;
    }
    
    Cluster::~Cluster(){
        
    }
    
    // Getters/setters
    unsigned int Cluster::getSize() const{ // TODO add to the requirements
        return __size;
    }
    unsigned int Cluster::getDimensionality() const{
        
    }
    unsigned int Cluster::getId() const{
        
    }
    // Set functions: They allow calling c1.add(c2.remove(p));
    void Cluster::add(const Point & a){ // TODO add asc order to the requirements
        
    }
    
    const Point &Cluster::remove(const Point & a){
        
    }
    
    bool Cluster::contains(const Point & p) const{
        
    }
    
    void Cluster::pickCentroids(unsigned int k, Point **pointArray){
        
    }
    
    // Overloaded operators
    
    // Members: Subscript
    const Point &Cluster::operator[](unsigned int index) const{ // notice: const
        
    }
    
    // Members: Compound assignment (Point argument)
    Cluster &Cluster::operator+=(const Point & a){
        
    }
    
    Cluster &Cluster::operator-=(const Point & a){
        
    }
    
    // Members: Compound assignment (Cluster argument)
    Cluster &Cluster::operator+=(const Cluster & a){ // union
        
    }
    
    Cluster &Cluster::operator-=(const Cluster & a){ // (asymmetric) difference
        
    }
    
    // Friends: IO
    std::ostream &operator<<(std::ostream & outData, const Cluster & a){
        
    }
    
    std::istream &operator>>(std::istream & inData, Cluster & a){
        
    }
    
    // Friends: Comparison
    bool operator==(const Cluster & a, const Cluster & b){
        
    }
    
    bool operator!=(const Cluster & a, const Cluster & b){
        
    }
    
    // Friends: Arithmetic (Cluster and Point)
    const Cluster operator+(const Cluster & a, const Point & b){
        
    }
    
    const Cluster operator-(const Cluster & a, const Point & b){
        
    }
    
    // Friends: Arithmetic (two Clusters)
    const Cluster operator+(const Cluster & a, const Cluster & b){ // union
    
    }
    
    const Cluster operator-(const Cluster & a, const Cluster & b){ // (asymmetric) difference
    
    }
    
    Cluster::Move::Move(const Point &p, Cluster &from, Cluster &to) : __p(p), __from(from), __to(to){
        
    }
    void Cluster::Move::perform(){
        
    }
    
    
    
    
}