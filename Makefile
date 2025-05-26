# 컴파일러 설정
CXX = g++
CXXFLAGS = -g -Wall

# 실행 파일 이름
TARGET = main.exe

# 모든 소스 파일
SRCS = Main.cpp Zoo.cpp Animal.cpp Dog.cpp Cat.cpp Cow.cpp

# 기본 타겟 (빌드)
all: $(TARGET)

# 실행 파일 빌드 (중간 .o 없이 바로 컴파일)
$(TARGET):
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 정리 명령 (clean)
clean:
	del /Q $(TARGET) 2>nul || rm -f $(TARGET)
