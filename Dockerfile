FROM gcc:4.9
COPY . /app
WORKDIR /app
RUN g++ -o fibon fibon.cpp
CMD ["./fibon"]
