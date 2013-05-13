echo -n "vre, define: "
make DEFINE_VRE=true OPT=define

echo -n "define: "
make DEFINE_VRE= OPT=define

echo -n "vre, add: "
make DEFINE_VRE=true OPT=add

echo -n "add: "
make DEFINE_VRE= OPT=add

echo -n "vre, recover: "
make DEFINE_VRE=true OPT=recover

echo -n "recover: "
make DEFINE_VRE= OPT=recover
