SUMMARY = "image base utils"
inherit packagegroup
PR = "r1"

# PACKAGES is "${PN}" by default
# if you want to add new groups by RDEPENDS_xx, you show add new group to PACKAGES
PACKAGES = "${PN} ${PN}-extended"

RDEPENDS_packagegroup-base = " \
packagegroup-core-base-utils \
kernel-module-overlay \
acl \
attr \
bind-utils \
cifs-utils \
cronie \
curl \
dosfstools \
e2fsprogs \
ethtool \
expat \
gdb \
gdbserver \
glib-2.0 \
grep \
gzip \
initscripts \
iproute2-ip \
iptables \
json-c \
kexec \
kmod \
less \
libaio \
libasm \
libbfd \
libcap \
libcap-bin \
libcap-ng \
libcap-ng-bin \
libdw \
libffi \
libhugetlbfs \
libnl \
libnl-cli \
libnl-xfrm \
libpcap \
libpwquality \
libselinux-bin \
libsepol-bin \
libusb1 \
libxml2 \
libxml2-utils \
logrotate \
lvm2 \
ncurses \
ncurses-libform \
ncurses-libmenu \
ncurses-libpanel \
ncurses-terminfo \
ncurses-terminfo-base \
nfs-utils \
nfs-utils-client \
pciutils \
policycoreutils \
policycoreutils-fixfiles \
policycoreutils-hll \
policycoreutils-loadpolicy \
policycoreutils-semodule \
policycoreutils-sestatus \
policycoreutils-setfiles \
procps \
pstree \
quota \
rpcbind \
rsyslog \
sed \
shadow-base \
squashfs-tools \
tzdata-core \
util-linux-su \
util-linux-libfdisk \
xz \
"

RDEPENDS_packagegroup-base-extended = " \
dhcp \
dhcp-libs \
dhcp-server \
dhcp-server-config \
"