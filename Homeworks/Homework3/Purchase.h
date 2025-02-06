// Oscar Alcantar
// Homework 3 - Purchase Class
// Description: Class to handle purchase details including discounts and tax
#ifndef PURCHASE_H
#define PURCHASE_H
class Purchase {
    private:
    float price{0.0f};
    bool isSpiritWear{false};
    public:
    // Constructor
    Purchase(float price, bool is_spirit_wear)
        : price(price),
          isSpiritWear(is_spirit_wear) {
    }
    // Getters and Setters
    void setPrice(float purchasePrice) {
        price = purchasePrice;
    }
    void setIsSpiritWear(bool is_spirit_wear) {
        isSpiritWear = is_spirit_wear;
    }
    float getPrice() const {
        return price;
    }
    bool getIsSpiritWear() const {
        return isSpiritWear;
    }
    // Function
    float getTotalPurchase() const {
        float discountRate{0.0f};
        if (isSpiritWear) {
            discountRate = (price >= 100.0f) ? 0.09f : 0.06f;
        }
        float discountedPrice = price * (1 - discountRate);
        float taxedPrice =  discountedPrice * 0.04f;
        return discountedPrice + taxedPrice;

    }

};
#endif //PURCHASE_H
