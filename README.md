# Tree-sitter grammar for Tamarin

![build](https://github.com/aeyno/tree-sitter-tamarin/actions/workflows/ci.yml/badge.svg)

Tree-sitter grammar for the [Tamarin](tamarin-prover.github.io/) prover theory files syntax highlighting.

Tree-sitter grammar are compatible with several editors including [Neovim](https://neovim.io/), [Helix](https://helix-editor.com/) and in a [near future](https://lists.gnu.org/archive/html/emacs-devel/2022-11/msg01443.html) [Emacs](https://www.gnu.org/software/emacs/).

## 💻 Installation

To use the syntax highlighting with your favorite editor, follow their specific installation process:

### Neovim

Installing a tree-sitter grammar in Neovim is described in the official documentation:
[https://neovim.io/doc/user/treesitter.html](https://neovim.io/doc/user/treesitter.html)

### Helix

Installing a tree-sitter grammar in Helix is described in the official documentation:
[https://docs.helix-editor.com/languages.html#tree-sitter-grammar-configuration](https://docs.helix-editor.com/languages.html#tree-sitter-grammar-configuration)

### Emacs

Installing a tree-sitter grammar in Emacs is described in the Emacs tree-sitter documentation:
[https://emacs-tree-sitter.github.io/](https://emacs-tree-sitter.github.io/)

## 🔨 Contributing

Feel free to open a pull request with your improvements.

The versionning of this repo will follow the Tamarin versioning, eg. version 1.6.1 of this grammar correspond to the Tamarin prover's grammar in version 1.6.1.
The *develop* branch of this repo will try to follow the [*develop* branch of Tamarin](https://github.com/tamarin-prover/tamarin-prover/tree/develop) as closely as possible but there may be some delay between the implementation in Tamarin and this grammar.

## 📃 License

This software is licensed under the MIT license.
