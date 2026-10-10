
void __fastcall FUN_00442f50(int param_1)

{
  if (*(int *)(param_1 + 0x74c) != *(int *)(param_1 + 0x748)) {
    *(int *)(param_1 + 0x748) = *(int *)(param_1 + 0x74c);
    *(undefined4 *)(param_1 + 0x750) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  switch(*(undefined4 *)(param_1 + 0x748)) {
  case 2:
    FUN_004430f0();
    FUN_0044c360();
    return;
  case 3:
    FUN_004441d0();
    FUN_0044c360();
    return;
  case 4:
    FUN_00444730();
    FUN_0044c360();
    return;
  case 5:
    FUN_00445630();
    FUN_0044c360();
    return;
  case 6:
    FUN_004444f0();
    FUN_0044c360();
    return;
  case 7:
    FUN_004449c0();
    FUN_0044c360();
    return;
  case 8:
    FUN_00444c70();
    FUN_0044c360();
    return;
  case 9:
    FUN_0044a940();
    FUN_0044c360();
    return;
  case 10:
    FUN_00445200();
    FUN_0044c360();
    return;
  case 0xb:
    FUN_00445320();
    FUN_0044c360();
    return;
  case 0xc:
    FUN_00445430();
    FUN_0044c360();
    return;
  case 0xd:
    FUN_00443d30();
    FUN_0044c360();
    return;
  case 0xe:
    FUN_00443a70();
    FUN_0044c360();
    return;
  case 0xf:
    FUN_004454c0();
    FUN_0044c360();
    return;
  case 0x10:
    FUN_004458a0();
    FUN_0044c360();
    return;
  case 0x11:
    FUN_00445ac0();
    FUN_0044c360();
    return;
  case 0x12:
    FUN_00445dd0();
  }
  FUN_0044c360();
  return;
}

