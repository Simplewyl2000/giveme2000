PV = "2.37.2"

# files, patches can't be applied in openeuler or conflict with openeuler
# ptest.patch, patch-fuzz warning
OPENEULER_SRC_URI_REMOVE = "https git http"
SRC_URI_remove += " \
        file://ptest.patch \
        file://avoid_parallel_tests.patch \
        file://Automake-use-EXTRA_LTLIBRARIES-instead-of-noinst_LTL.patch \
        file://CVE-2021-37600.patch \
"

# files, patches that come from openeuler
SRC_URI_prepend += " \
        file://util-linux-${PV}.tar.xz \
        file://2.36-login-lastlog-create.patch \
        file://backport-CVE-2021-3995.patch \
        file://backport-CVE-2021-3996.patch \
        file://realloc-buffer-when-header-size-changed.patch \
        file://fix-size-use-for-stdin.patch \
        file://segmentation-fault-on-invalid-unicode-input-passed-to-s-option.patch \
        file://backport-fix-by-ignoring-EINVAL-on-remount-of-proc.patch \
        file://backport-su-bash-completion-offer-usernames-rather-than-files.patch \
        file://backport-Fix-memory-leaks-in-the-chcpu.patch \
        file://backport-logger-fix-prio-prefix-doesn-t-use-priority-default.patch \
        file://backport-vipw-flush-stdout-before-getting-answer.patch \
        file://backport-login-Restore-tty-size-after-calling-vhangup.patch \
        file://backport-Forward-value-of-sector_size-instead-of-its-address.patch \
        file://backport-libfdisk-dereference-of-possibly-NULL-gcc-analyzer.patch \
        file://backport-libfdisk-check-calloc-return-gcc-analyzer.patch \
        file://backport-mcookie-fix-infinite-loop-when-use-f.patch \
        file://backport-sfdisk-write-empty-label-also-when-only-ignored-part.patch \
        file://backport-fstat-dir-itself.patch \
        file://backport-libblkid-src-topology-dm-close-redundant-write-file-.patch \
        file://backport-libblkid-topology-init-variables-for-DM.patch \
        file://backport-sfdisk-fix-typo-in-move-data-when-check-partition-size.patch \
        file://backport-losetup-fix-memory-leak-asan.patch \
        file://backport-partx-remove-memory-leak-to-make-scanners-happy-coverity-scan.patch \
        file://backport-lib-path-make-ul_path_read_buffer-more-robust-coverity-scan.patch \
        file://backport-libmount-fix-possible-memory-leak-in-mnt_optstr_fix_secontext-coverity-scan.patch \
        file://backport-libblkid-probe-fix-size-and-offset-overflows-fuzzing.patch \
        file://backport-lslogins-improve-prefixes-interpretation.patch \
        file://backport-lsns-fix-the-memory-leak.patch \
        file://backport-libblkid-check-fsync-return-code.patch \
        file://backport-libblkid-mac-make-sure-block-size-is-large-enough-fuzzing.patch \
        file://backport-libblkid-bsd-fix-buffer-pointer-use-fuzzing.patch \
        file://backport-libblkid-hfs-fix-label-use-fuzzing.patch \
        file://backport-Maybe-there-is-a-little-mistake-in-do_taskset-functi.patch \
        file://backport-lsblk-fix-endless-loop-if-device-specified-more-than-once.patch \
        file://backport-libblkid-avoid-buffer-overflow-in-ocfs-superblock-parsing.patch \
        file://backport-fsck-Processes-may-kill-other-processes.patch \
        file://backport-fdisk-fix-output-option-parsing.patch \
        file://backport-libblkid-exfat-fix-divide-by-zero-coverity-scan.patch \
        file://backport-llib-pty-session-split-PTY-and-signalfd-setup.patch \
        file://backport-script-fix-use-of-utempter.patch \
        file://backport-logger-always-update-header-when-read-from-stdin.patch \
        file://Add-check-to-resolve-uname26-version-test-failed.patch \
        file://SKIPPED-no-root-permissions-test.patch \
"

SRC_URI[sha256sum] = "6a0764c1aae7fb607ef8a6dd2c0f6c47d5e5fd27aa08820abaad9ec14e28e9d9"
