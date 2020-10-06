extern crate sdl2;

use sdl2::pixels::Color;
use sdl2::event::Event;
use sdl2::rect::Rect;

pub fn main() -> Result<(), String>
{
    // Init SDL
    let sdl_context = sdl2::init()?;
    let video_subsystem = sdl_context.video()?;

    // Create window
    let window = video_subsystem.window("SDL Square", 800, 600)
        .position_centered()
        .opengl()
        .build()
        .map_err(|e| e.to_string())?;

    let mut canvas = window.into_canvas().build().map_err(|e| e.to_string())?;

    // Draw a black background
    canvas.set_draw_color(Color::RGB(0, 0, 0));
    canvas.clear();

    // Draw the red square
    canvas.set_draw_color(Color::RGB(255, 0, 0));
    canvas.fill_rect(Rect::new(400 - 128, 300 - 128, 256, 256))?;

    // Display everything
    canvas.present();

    // Loop until user quits
    let mut event_pump = sdl_context.event_pump()?;

    'running: loop
    {
        for event in event_pump.poll_iter()
        {
            match event
            {
                Event::Quit {..} => {
                    break 'running
                },
                _ => {}
            }
        }
    }

    Ok(())
}