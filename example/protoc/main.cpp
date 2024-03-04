#include "example/protoc/user_data.pb.h"
#include "iostream"

using namespace std;

int main(int argc, char const* argv[]) {
  data::users::UserProfile userProfile;
  userProfile.set_email("756633687@qq.com");
  userProfile.set_id(123456);

  cout << "user profile id: " << userProfile.id() << " email: " << userProfile.email();
  return 0;
}