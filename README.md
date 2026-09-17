# CSCI 235 — Programming Environment

Software Design & Analysis II · Hunter College, CUNY · Fall 2026 · Tong Yi

This repository provides a ready-to-use Linux development environment for CSCI 235, including a
pre-configured [dev container](.devcontainer/devcontainer.json) with `g++`, `gdb`, and `valgrind`
already installed. It exists so that everyone in the course — whether you're on macOS, Windows, or
Linux — gets the exact same environment for compiling code and checking it with Valgrind.

## Quick Start

1. Click **Fork** (top right) to create your own personal copy of this repository.
2. From your fork, click **Code → Codespaces → Create codespace on main**.
3. Wait about a minute for the environment to build, then open a terminal and verify the tools:

```bash
   g++ --version
   gdb --version
   valgrind --version
```

4. Do your work, then save it with the usual git workflow:

```bash
   git status
   git add <files>
   git commit -m "Describe what you did"
   git push
```

For a fully detailed, step-by-step walkthrough with troubleshooting, see the Valgrind + Codespaces
setup guide handed out in class.

## What's Here

- `.devcontainer/` — the dev container configuration (base image and the command that installs
  Valgrind). You shouldn't need to touch this.
- Everything else is your own work for exercises and projects that use this environment — organize
  it however your assignment instructions say to.

## Notes

- Each codespace you create is temporary. **Commit and push regularly** — an idle codespace may be
  automatically deleted after a period of inactivity, and unpushed work is not recoverable.
- A free GitHub account includes enough Codespaces usage for normal course work; **stop your
  codespace** when you're done for the day rather than just closing the tab.