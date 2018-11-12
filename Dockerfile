FROM debian:9

RUN apt-get update \
 && apt-get install -y gcc g++ make sudo valgrind

WORKDIR /apps/

CMD ["/bin/bash"]
