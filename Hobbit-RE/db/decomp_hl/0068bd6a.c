
/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 * FUN_0068bd6a(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_006c27f8();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 < 0x31545845) {
    if (iVar2 == 0x31545844) {
      puVar3 = (undefined4 *)operator_new(0x10a8);
      *(undefined4 **)(unaff_EBP + 8) = puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0068b4cb(iVar1);
        *puVar3 = &PTR_FUN_006fa06c;
        goto LAB_0068c340;
      }
    }
    else if (iVar2 < 0x29) {
      if (iVar2 == 0x28) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,0x10,2);
          *puVar3 = &PTR_FUN_006f9fd0;
          goto LAB_0068c340;
        }
      }
      else {
        switch(iVar2) {
        case 0x14:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x18,1);
            *puVar3 = &PTR_FUN_006f9f4c;
            goto LAB_0068c340;
          }
          break;
        case 0x15:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x20,1);
            *puVar3 = &PTR_FUN_006f9f58;
            goto LAB_0068c340;
          }
          break;
        case 0x16:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x20,1);
            *puVar3 = &PTR_FUN_006f9f64;
            goto LAB_0068c340;
          }
          break;
        case 0x17:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9f70;
            goto LAB_0068c340;
          }
          break;
        case 0x18:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9f7c;
            goto LAB_0068c340;
          }
          break;
        case 0x19:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9f88;
            goto LAB_0068c340;
          }
          break;
        case 0x1a:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9f94;
            goto LAB_0068c340;
          }
          break;
        case 0x1b:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,8,1);
            *puVar3 = &PTR_FUN_006f9fa0;
            goto LAB_0068c340;
          }
          break;
        case 0x1c:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,8,1);
            *puVar3 = &PTR_FUN_006f9fac;
            goto LAB_0068c340;
          }
          break;
        case 0x1d:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9fb8;
            goto LAB_0068c340;
          }
          break;
        case 0x1e:
          puVar3 = (undefined4 *)operator_new(0x1064);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_0068903f(iVar1,0x10,1);
            *puVar3 = &PTR_FUN_006f9fc4;
            goto LAB_0068c340;
          }
        }
      }
    }
    else if (iVar2 < 0x3e) {
      if (iVar2 == 0x3d) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,0x10,3);
          *puVar3 = &PTR_FUN_006fa018;
          goto LAB_0068c340;
        }
      }
      else if (iVar2 == 0x29) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,8,2);
          *puVar3 = &PTR_FUN_006f9fdc;
          goto LAB_0068c340;
        }
      }
      else if (iVar2 == 0x32) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,8,1);
          *puVar3 = &PTR_FUN_006f9fe8;
          goto LAB_0068c340;
        }
      }
      else if (iVar2 == 0x33) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,0x10,1);
          *puVar3 = &PTR_FUN_006f9ff4;
          goto LAB_0068c340;
        }
      }
      else if (iVar2 == 0x34) {
        puVar3 = (undefined4 *)operator_new(0x1064);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_0068903f(iVar1,8,1);
          *puVar3 = &PTR_FUN_006fa000;
          goto LAB_0068c340;
        }
      }
      else if ((iVar2 == 0x3c) &&
              (puVar3 = (undefined4 *)operator_new(0x1064), puVar3 != (undefined4 *)0x0)) {
        FUN_0068903f(iVar1,0x10,3);
        *puVar3 = &PTR_FUN_006fa00c;
        goto LAB_0068c340;
      }
    }
    else if (iVar2 == 0x3e) {
      puVar3 = (undefined4 *)operator_new(0x1064);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0068903f(iVar1,0x20,3);
        *puVar3 = &PTR_FUN_006fa024;
        goto LAB_0068c340;
      }
    }
    else if (iVar2 == 0x3f) {
      puVar3 = (undefined4 *)operator_new(0x1064);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0068903f(iVar1,0x20,3);
        *puVar3 = &PTR_FUN_006fa030;
        goto LAB_0068c340;
      }
    }
    else if (iVar2 == 0x40) {
      puVar3 = (undefined4 *)operator_new(0x1064);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0068903f(iVar1,0x20,3);
        *puVar3 = &PTR_FUN_006fa03c;
        goto LAB_0068c340;
      }
    }
    else if ((iVar2 == 0x41) &&
            (puVar3 = (undefined4 *)operator_new(0x1064), puVar3 != (undefined4 *)0x0)) {
      FUN_0068903f(iVar1,0x20,3);
      *puVar3 = &PTR_FUN_006fa048;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x32545844) {
    puVar3 = (undefined4 *)operator_new(0x10a8);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068b4cb(iVar1);
      *puVar3 = &PTR_FUN_006fa078;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x32595559) {
    puVar3 = (undefined4 *)operator_new(0x1094);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068ae4f(iVar1);
      *puVar3 = &PTR_FUN_006fa060;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x33545844) {
    puVar3 = (undefined4 *)operator_new(0x10a8);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068b4cb(iVar1);
      *puVar3 = &PTR_FUN_006fa084;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x34545844) {
    puVar3 = (undefined4 *)operator_new(0x10a8);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068b4cb(iVar1);
      *puVar3 = &PTR_FUN_006fa090;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x35545844) {
    puVar3 = (undefined4 *)operator_new(0x10a8);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068b4cb(iVar1);
      *puVar3 = &PTR_FUN_006fa09c;
      goto LAB_0068c340;
    }
  }
  else if (iVar2 == 0x59565955) {
    puVar3 = (undefined4 *)operator_new(0x1094);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0068ae4f(iVar1);
      *puVar3 = &PTR_FUN_006fa054;
      goto LAB_0068c340;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_0068c340:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}

