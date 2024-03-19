#include <iostream>
#include <string>
#include <vector>
using namespace std;
class User;

class User {
private:
    string userName;
    vector<string> friends;
    vector<string> interests;

public:
    User(const string& name, const vector<string>& initialFriends, const vector<string>& initialInterests){
        this->userName = name;
        this->friends.insert (this->friends.end(),initialFriends.begin(),initialFriends.end());
        this->interests.insert (this->interests.end(),initialInterests.begin(),initialInterests.end());
    }
       
    friend void suggestNewFriends(const User& user);
};

// Define the friend function to suggest new friends
void suggestNewFriends(const User& user) {
    cout << "Suggested friends for " << user.userName << ":" << endl;

  
    for (const User& otherUser : users) {
        if (user.userName != otherUser.userName) {
            // Check for mutual friends
            int mutualFriends = 0;
            for (const string& friend : user.friends) {
                if (find(otherUser.friends.begin(), otherUser.friends.end(), friend) != otherUser.friends.end()) {
                    mutualFriends++;
                }
            }

            // Check for common interests
            int commonInterests = 0;
            for (const string& interest : user.interests) {
                if (find(otherUser.interests.begin(), otherUser.interests.end(), interest) != otherUser.interests.end()) {
                    commonInterests++;
                }
            }

            // Suggest the user as a friend if they have mutual friends and common interests
            if (mutualFriends > 0 && commonInterests > 0) {
                cout << "- " << otherUser.userName << " (Mutual Friends: " << mutualFriends << ", Common Interests: " << commonInterests << ")" << endl;
            }
        }
    }
}

// A vector to store all users in the social network
vector<User> users;

int main() {
    // Create some users and add them to the social network
    User user1("Alice", {"Bob", "Charlie"}, {"Hiking", "Reading"});
    User user2("Bob", {"Alice", "David"}, {"Hiking", "Swimming"});
    User user3("Charlie", {"Alice", "Eve"}, {"Reading", "Cooking"});
    User user4("David", {"Bob", "Frank"}, {"Swimming", "Music"});
    User user5("Eve", {"Charlie", "Frank"}, {"Cooking", "Music"});

    users = {user1, user2, user3, user4, user5};

    // Suggest new friends for each user
    for (const User& user : users) {
        suggestNewFriends(user);
    }

    return 0;
}
