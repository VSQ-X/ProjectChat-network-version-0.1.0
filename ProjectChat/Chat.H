//класс непосредственно дл€ реализации самого чата
#include "User.h"
class Chat {
private:
	vector<User> users;//вектор дл€ хранени€ пользователей 
	map<string, User*> userIdent;//идентификаци€ пользовател€ по паролю и логину
	map<string, string> privateMessages;//хранение личных сообщений пользователей, ключ- им€ пользовател€, значение- личное сообщение
	vector<string> publicMessages; // вектор лл€ хранени€ сообщений дл€ общего чата.
public:
	//реализаци€ функционала чата

	void registerUser(string login, string password);//регистраци€ пользовате€

	auto loginUser(string login, string password) -> User*;//вход пользовател€

	void lsMessage(User* sender, string recipientLogin);//отправка личных сообщений

	void broadcastMessage(User* sender, string message);//отправка сообщений в общий чат

	void logout(User*& currentUser);// выход из аккаунта

	void showListOfUsers();//показ всех зарегистрированных пользователей в чате

	void showLsMessage(string log);//показывает личные сообщени€ 

	void showMessageForAll();//показывает сообщени€ в общем чате
	void tcpCommunication();

	void end();//функци€ дл€ очищени€ пам€ти после завершени€ программы
	~Chat();
	Chat();
};
