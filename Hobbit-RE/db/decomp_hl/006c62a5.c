
void FUN_006c62a5(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_008174ac == 0) {
    FUN_006cb0ec();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_00815d88; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = (undefined4 *)_malloc(iVar5 * 4 + 4);
  DAT_00815d4c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_00815d88;
  pcVar6 = DAT_00815d88;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_006c9dd0(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_006c1d53(DAT_00815d88);
  DAT_00815d88 = (char *)0x0;
  *puVar3 = 0;
  DAT_008174a8 = 1;
  return;
}

