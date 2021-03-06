#include "local_packet.h"

void LocalPacket::PacketDataInitialization()
{
	system("cls");
	std::ifstream file(files[selectedFile].path(), std::ios::binary | std::ios::ate);

	if (file.is_open()) {
		status = "Packet readed";

		std::cout << "\n File name: " + files[selectedFile].path().filename().string() + "\n";
		std::cout << " Status: ";
		SetConsoleTextAttribute(STDOUT_HANDLE, BACKBLACK_FORELIME);
		std::cout << status;
		SetConsoleTextAttribute(STDOUT_HANDLE, BACKBLACK_FOREWHITE);
		std::cout << "\n File size: " + std::to_string(files[selectedFile].file_size()) + " bytes\n";
		std::cout << " Extension: " + files[selectedFile].path().extension().string() + "\n\n";

		if (packetArrayBytes.size())
			packetArrayBytes.clear();

		if (packetArrayBits.size())
			packetArrayBits.clear();

		std::ifstream::pos_type position = file.tellg();
		packetArrayBytes = std::vector<unsigned char>(position);

		file.seekg(0, std::ios::beg);
		file.read((char*)&packetArrayBytes[0], position);

		std::string temporalBits;

		for (unsigned int i = 14; i < packetArrayBytes.size(); ++i) {
			temporalBits = std::bitset<8>(packetArrayBytes[i]).to_string();

			for (int j = 0; j < 8; ++j)
				packetArrayBits.push_back(temporalBits[j]);
		}

		PacketShowData();
		status = "Finished";
	}
	else
	{
		SetConsoleTextAttribute(STDOUT_HANDLE, BACKBLACK_FORERED);
		std::cout << "\n ERROR: " + files[selectedFile].path().filename().string() + " is not available,\n please select another file";
		std::cin.get();
		SetConsoleTextAttribute(STDOUT_HANDLE, BACKBLACK_FOREWHITE);
	}

}

void LocalPacket::PacketShowData()
{
	Ethernet(packetArrayBytes, packetArrayBits);
}

LocalPacket::LocalPacket()
	: selectedFile(0U), packetArrayBytes{}, packetArrayBits{}, files{}, status("Initializating")
{}

LocalPacket::LocalPacket(const std::vector<std::filesystem::directory_entry>& _files)
	: selectedFile(0U), packetArrayBytes{}, packetArrayBits{}, files{}, status("Initializating")
{
	for (const std::filesystem::directory_entry& dirEntry : _files)
		if (dirEntry.path().extension() == ".bin")
			files.emplace_back(dirEntry);
}

LocalPacket::~LocalPacket() 
{}

void LocalPacket::ShowFiles()
{
	for (unsigned int fileIndex = 0; fileIndex < files.size(); ++fileIndex) {
		if (fileIndex == selectedFile) {
			SetConsoleTextAttribute(STDOUT_HANDLE, BACKWHITE_FOREBLACK);
			std::cout << "> " + files[fileIndex].path().filename().string() + " <\n";
			SetConsoleTextAttribute(STDOUT_HANDLE, BACKBLACK_FOREWHITE);
		}
		else {
			std::cout << "  " + files[fileIndex].path().filename().string() + "\n";
		}
	}
}

const std::string LocalPacket::TaskStatus()
{
	return this->status;
}

void LocalPacket::SelectorEvent(int _selectorValue)
{
	const unsigned int FIRST_FILE_INDEX = 0U, LAST_FILE_INDEX = unsigned int(files.size() - 1);

	if (_selectorValue == ARROW_DOWN) {
		if (selectedFile == LAST_FILE_INDEX)
			selectedFile = FIRST_FILE_INDEX;
		else
			++selectedFile;
	}
	else if (_selectorValue == ARROW_UP) {
		if (selectedFile == FIRST_FILE_INDEX)
			selectedFile = LAST_FILE_INDEX;
		else
			--selectedFile;
	}
	else if (_selectorValue == ENTER) {
		PacketDataInitialization();
	}
}
