use std::time::{SystemTime};
fn main() {
    
    let t1 = SystemTime::now();
    let n=10000;
    let m1 = vec![1,2,3];
    let m1_pointer = m1.as_ptr();
    let m1_address = m1_pointer as usize;
    println!("address1 = {:X}", m1_address);

    let values = vec![0;n];
    for x in values.iter(){
        if *x == -1{
            break;
        }
    }
    let m2 = vec![1,2,3];
    let m2_pointer = m2.as_ptr();
    let m2_address = m2_pointer as usize;
    println!("address2 = {:X}", m2_address);
    
    
    if m2_address>m1_address{
        println!("Memory = {}", (m2_address-m1_address)+(4*n) );
    }
    else{
        println!("Memory = {}", (m1_address-m2_address)+(4*n));
    }
    match t1.elapsed() {
        Ok(elapsed) => {
            println!("Milisegundos= {}", elapsed.as_millis());
        }
        Err(e) => {
            println!("Error: {:?}", e);
        }
    }
    
    

    
}