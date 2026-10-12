# Lab 1: Generate File Hashes

## Objective

Generate and record SHA-1 and SHA-256 hashes for the Academic Policy Manual PDF.

## File

`D:\Iqra University\Academic-Policy-Manual-for-Students2.pdf`

## SHA-1 Hash (Command Prompt)

Run:

```cmd
certutil -hashfile "D:\Iqra University\Academic-Policy-Manual-for-Students2.pdf"
```

Result:

```text
SHA1 hash of D:\Iqra University\Academic-Policy-Manual-for-Students2.pdf:
b2c92a4a06c5c95f070ad9f144e78255a6f7d795
CertUtil: -hashfile command completed successfully.
```

## SHA-256 Hash (PowerShell)

Run:

```powershell
Get-FileHash "D:\Iqra University\Academic-Policy-Manual-for-Students2.pdf" -Algorithm SHA256
```

Result:

```text
Algorithm       Hash                                                                   Path
---------       ----                                                                   ----
SHA256          094E2D4EC56C39533CE022C495B68BA6DDCA9C54C351F680AF271B3F6C641F01       D:\Iqra University\Academic-Policy-Manual-for-Students2.pdf
```

## Recorded Hashes

| Algorithm | Hash |
|---|---|
| SHA-1 | `b2c92a4a06c5c95f070ad9f144e78255a6f7d795` |
| SHA-256 | `094E2D4EC56C39533CE022C495B68BA6DDCA9C54C351F680AF271B3F6C641F01` |

## Online MD5 Tools

- **Generate an MD5 hash:** [MD5 Hash Generator](https://www.md5hashgenerator.com/)
- **Look up an MD5 hash:** [GromWeb MD5 Lookup](https://md5.gromweb.com/)

> MD5 is a one-way hash function, so a hash cannot be directly reversed. A lookup tool can only return the original text if it already has a matching value in its database.



