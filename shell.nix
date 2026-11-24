
{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  packages = [
    pkgs.qmk
  ];
  shellHook = ''
    echo "Setting up OpenStack development environment..."
    zsh
  '';
}
