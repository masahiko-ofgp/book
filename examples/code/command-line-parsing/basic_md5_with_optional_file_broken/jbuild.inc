(jbuild_version 1)

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (basic_md5_with_optional_file_broken.ml.sexp))))

(rule (
  (targets (basic_md5_with_optional_file_broken.ml.sexp))
  (deps    (basic_md5_with_optional_file_broken.ml))
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias (
  (name sexp) (deps (build_basic_md5_with_optional_file_broken.errsh.sexp))))

(rule (
  (targets (build_basic_md5_with_optional_file_broken.errsh.sexp))
  (deps (build_basic_md5_with_optional_file_broken.errsh))
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))
